#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
char stack[20];
int top=-1;
void push(int sym)
{
    stack[++top]=sym;
}
char pop()
{
    return (stack[top--]);
}
int pres(char sym)
{
    switch(sym)
    {
        case '$':
        case '^':
            return 4;
        case '%':
        case '*':
        case '/':
            return 3;
        case '+':
        case '-':
            return 2;
        case '(':
        case ')':
        case '#':
            return 1;
	default:("Invalid Input");
		break;
    }
}
void convertip(char *infix,char *postfix)
{
	char symbol;
	int i,j=0;
	push('#');
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		switch(symbol)
		{
			case '(':
				push(symbol);
				break;
			case ')':
				while(stack[top]!='(')
					postfix[j++]=pop();
				pop();
				break;
			case '^':
			case '$':
			case '%':
			case '/':
			case '*':
			case '+':
			case '-':
				while(pres(symbol)<=pres(stack[top]))
					postfix[j++]=pop();
				push(symbol);
				break;
			default:
				postfix[j++]=symbol;
		}
	}
	while(stack[top]!='#')
		postfix[j++]=pop();
	postfix[j++]='\0';
	
}
void evaluate(char *postfix)
{
	int i;
	char sym;
	float op1,op2,result;
	for(i=0;i<strlen(postfix);i++)
	{
		sym=postfix[i];
		if(isdigit(sym))
			push(sym-'0');
		else
		{
			op2=pop();
			op1=pop();
			switch(sym)
			{
				case '+':
					push(op1+op2);
					break;
				case '-':
                                        push(op1-op2);
                                        break;
				case '*':
                                        push(op1*op2);
                                        break;
				case '/':
                                        push(op1/op2);
                                        break;
				/*case '%':
                                        push(op1%op2);
                                        break;*/
				case '^':
                                        push(pow(op1,op2));
                                        break;
				default:printf("Error");
			}
		}
	}
	result=pop();
	printf("Result=%d",result);
}
void main()
{
	char infix[50],postfix[30];
	printf("Enter the expression:\n");
	scanf("%c",&infix);
	convertip(infix,postfix);
	printf("The expression after evaluating from infix to postfix:%s",postfix);
	evaluate(postfix);
}
