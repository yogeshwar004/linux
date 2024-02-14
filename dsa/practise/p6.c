#include<stdio.h>
int even(int a)
{
	int b;
	b=(a%2==0)?1:0;
	return b;
}
int main()
{
	int a=5,b;
	b=even(a);
	if(b==1)
		printf("\nEven\n");
	else
		printf("\nOdd\n");
	return 0;
}
