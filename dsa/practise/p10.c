#include<stdio.h>
int main()
{
	int *ptr,a[5],i;
	ptr=a;
	printf("Enter Array Elements:\n");
	for(i=0;i<5;i++)
		scanf("%d",ptr+i);
	ptr=a;
	printf("Array:");
	for(i=0;i<5;i++)
                printf("%d\t",*(ptr+i));
	printf("\n");
	return 0;
}
