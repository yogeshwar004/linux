#include<stdio.h>
void main()
{
	int a[10],avg,n,i,total=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("\nEnter Elements %d:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
        {
                total=total+a[i];
		avg=total/n;
		printf("\nAverage=%d\n",avg);
        }

}
