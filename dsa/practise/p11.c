#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("\nEnter size of n:\n");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	if(a==NULL)
		printf("Unsucessful Allocation");
	else
	{
		
	}
}
