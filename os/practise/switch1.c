#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,res,op;
	printf("Enter 1:add\n2:subtract\n3:multiply\n4:division");
	scanf("%d",&op);
	printf("Enter simple arithmetic expression:\n");
	scanf("%d%d",&a,&b);
	switch(op)
	{
		case 1:res=a+b;
			break;
		case 2:res=a+b;
                        break;
		case 3:res=a*b;
                        break;
		case 4:if(b!=0)
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
	}
	printf("%d",res);
	return 0;
}
