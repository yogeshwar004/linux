//FCFS
#include<stdio.h>
void main()
{
    int p[10],at[10],bt[10],ct[10],tat[10],wt[10],i,j,temp=0,n;
    float awt=0,atat=0;
    printf("\nEnter the number of processes:\n");
    scanf("%d",&n);
    printf("\nEnter pid of processes:\n");
    printf("\nEnter %d arrival time:\n",n);
    for(i=0;i<n;i++)
    {
        p[i]=i;
        scanf("%d",&at[i]);
    }
    printf("\nEnter %d burst time:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&bt[i]);
    ct[0]=at[0]+bt[0];
    for(i=0;i<n;i++)
    {
        temp=0;
        if(ct[i-1]<at[i])
            temp=at[i]-ct[i-1];
        ct[i]=ct[i-1]+bt[i]+temp;
    }
    printf("\nP\tAT\tBT\tCT\tTAT\tWT\n");
    for(i=0;i<n;i++)
    {
        tat[i]=ct[i]-at[i];
        wt[i]=tat[i]-bt[i];
        atat+=tat[i];
        awt+=wt[i];
    }
    atat/=n;
    awt/=n;
    for(i=0;i<n;i++)
        printf("\n%d\t%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
    printf("\nATAT=%f\n",atat);
    printf("\nAWT=%f\n",awt);
    
}