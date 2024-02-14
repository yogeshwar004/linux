//Array Operations
#include<stdio.h>
#include<stdlib.h>
int a[20],n;
void create()
{
	int i;
	printf("\nEnter the Size of the array:\n");
	scanf("%d",&n);
	printf("\nEnter the Array Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display()
{
	int i;
	printf("\nThe Array Elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void insert()
{
	int ele,pos,i;
	printf("\nEnter the Position and Elements to be inserted:\n");
	scanf("%d%d",&pos,&ele);
	if(pos<1||pos>n)
	{
		printf("\nInvalid Input...\n");
		exit(0);
	}
	for(i=pos;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=ele;
	n++;
}
void deletion()
{
	int pos,i;
	printf("\nEnter the position to be delete:\n");
	scanf("%d",&pos);
	if(pos<1||pos>n)
	{
		printf("\nInvalid Input...\n");
		exit(0);
	}
	for(i=pos;i<=n-1;i++)
		a[i-1]=a[i];
	n--;
}
int main()
{
	int choice;
	while(1)
	{
		printf("\nEnter\n1 for Create\n2 for Display\n3 for Insertion\n4 for Deletion\n5 for Exit\n");
	        scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
                                display();
                                break;
			case 3:
                                insert();
                                break;
			case 4:
				deletion();
				break;
			case 5:
				exit(0);
				break;
			default:printf("\nInvalid Operator\n");
		}
	}
}
