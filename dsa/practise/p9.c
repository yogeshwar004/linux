//Swapping the number using pointer
#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("a=%d\tb=%d",*a,*b);
}
int main()
{
	int a,b;
	printf("Enter the a and b:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
}

