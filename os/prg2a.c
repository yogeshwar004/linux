#include<stdio.h>
int main()
{
	int n,p[10],at[10],bt[10],ct[10],tat[10],wt[10],i,j,temp=0;
	float atat=0,awt=0;
	printf("Enter the number of processes:");
	scanf("%d",&n);
	printf("\nEnter the arrival time:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
		printf("\n");
	}
	printf("Enter the burst time:\n");
	for(i=0;i<n;i++)
        {
                scanf("%d",&bt[i]);
                printf("\n");
        }
	ct[0]=at[0]+bt[0];
	for(i=1;i<n;i++)
        {
		temp=0;
                if(ct[i-1]<at[i])
			temp=at[i]-ct[i-1];
		ct[i]=ct[i-1]+bt[i]+temp;
        }
	printf("\np\tat\tbt\tct\ttat\twt\t");
	for(i=0;i<n;i++)
        {
		tat[i]=ct[i]-at[i];
                wt[i]=tat[i]-bt[i];
		atat+=tat[i];
		awt+=wt[i];
        }
	atat=atat/n;
	awt=awt/n;
	for(i=0;i<n;i++)
        {
                printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
        }
	printf("\nAverage Turn Around Time is %f",atat);
	printf("\nAverage Waiting Time is %f\n",awt);
	return 0;
}
