#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,res;
	char op;
	printf("Enter simple arithmetic expression:\n");
	scanf("%d%c%d",&a,&op,&b);
	switch(op)
	{
		case '+':
			res=a+b;
			break;
		case '-':
                        res=a+b;
                        break;
		case '*':
                        res=a*b;
                        break;
		case '/':if(b!=0)
			 {
                         	res=a/b;
                         	break;
			 }
			 else
			 {
			 	printf("ZeroDivisionError.....Division is not allowed with zero in denominator");
			 	exit(0);
			 }
		default:printf("Invalid Input");
			break;
	}
	printf("%d%c%d=%d\n",a,op,b,res);
	return 0;
}
