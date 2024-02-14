#include<stdio.h>
#include<stdlib.h>
struct DLL
{
	int ssn;
	char name[20];
	char dept[20];
	char desg[20];
	int sal;
	char phno[11];
	struct DLL *prev,*next;
};
typedef struct DLL node;
node *start=NULL;
node* getnode()
{
	node *newnode=(node*)malloc(sizeof(node));
	printf("\nEnter ssm,name,department,designation,salary,phone number:\n");
	scanf("%d%s%s%s%d%s",&newnode->ssn,newnode->name,newnode->dept,newnode->desg,&newnode->sal,newnode->phno);
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}
void insertbegin()
{
	node *newnode=getnode();
	if(start==NULL)
		start=newnode;
	else
	{
		newnode->next=start;
		newnode->prev=newnode;
		start=newnode;
	}
}

void insertend()
{
	node *newnode=getnode(),*temp=start;
	if(start==NULL)
	{
		start=newnode;
		return;
	}
	while(temp->next!=NULL)
		temp=temp->next;
	temp->next=newnode;
	newnode->prev=temp;
}

void deletebegin()
{
	node *temp=start;
	if(start==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	printf("\nDeleted node is\n%d\t%s\t%s\t%s\t%d\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
	start->prev=NULL;
	start=temp->next;
	free(temp);
}
void deleteend()
{
	node *temp=start;
	if(start==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	if(start->next==NULL)
	{
		printf("\nDeleted node is\n%d\t%s\t%s\t%s\t%d\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		start=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		(temp->prev)->next=NULL;
		printf("\nDeleted node is\n%d\t%s\t%s\t%s\t%d\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		free(temp);
	}
}
void display()
{
	node *temp=start;
	int count=0;
	if(start==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	printf("\nList Elements are\n");
	while(temp!=NULL)
	{
		printf("\n%d\t%s\t%s\t%s\t%d\t%s\n",temp->ssn,temp->name,temp->dept,temp->desg,temp->sal,temp->phno);
		temp=temp->next;
		count++;
	}
	printf("\nNo of Employees=%d\n",count);
}
int main()
{
	int choice,n,i;
	while(1)
	{
		printf("\n1 for insertend\n2 for insertbegin\n3 for deletebegin\n4 for deleteend\n5 for display\n6 for exit\nEnter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the no of employee:\n");
				scanf("%d",&n);
				for(i=0;i<n;i++)
					insertend();
			case 2:
				insertbegin();
				break;
			case 3:
				deletebegin();
				break;
			case 4:
				deleteend();
				break;
			case 5:
				display();
				break;
			case 6:
				exit(0);
			default:
				printf("\nInvalid Choice\n");
				break;
		}
	}
}
