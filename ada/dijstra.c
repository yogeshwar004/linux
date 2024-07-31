#include<stdio.h>
void dijstra(int s,int n,int cost[][10])
{
	int j,dist[n],visited[n],i,v,count=0,u,min;
	for(j=0;j<n;j++)
	{
		dist[j]=cost[i][j];
		visited[j]=0;
	}
	dist[s]=0;
	visited[s]=1;
	for(count=0;count<n;count++)
	{
		min=999;
		for(i=0;i<n;i++)
		{
			if(visited[i]==0&&dist[i]<min)
			{
				min=dist[i];
				u=i;
			}
		}
		visited[u]=1;
		for(v=0;v<n;v++)
		{
			if(visited[v]==0&&cost[u][v]!=999&&dist[v]>(dist[u]+cost[u][v]))
			{
				dist[v]=dist[u]+cost[u][v];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nEdge from vertex %d to %d is %d",s,i,dist[i]);
	}
}
int main()
{
	int i,j,n,cost[10][10],s;
	printf("\nEnter the number of nodes:");
	scanf("%d",&n);
	printf("\nEnter the cost matrix:\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	printf("\nEnter the starting nodes:");
	scanf("%d",&s);
	dijstra(s,n,cost);
}