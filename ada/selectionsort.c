#include<stdio.h>
#include<stdlib.h>
static int count=0;
void selectionsort(int a[],int n)
{
	int i,j,pos,temp;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			count++;
			if(a[j]<a[pos])
				pos=j;
	        }
	        if(i!=pos)
                {
				temp=a[i];
				a[i]=a[pos];
				a[pos]=temp;
		}
	}
}
int main()
{
	int *a,n,i;
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nThe Array Elements are \n");
	for(i=0;i<n;i++)
	{
		a[i]=rand()%1001;
		printf("%d\t",a[i]);
	}
	selectionsort(a,n);
	printf("\nThe Sorted Array:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nBasic Operation Count=%d",count);
	return 0;
}
