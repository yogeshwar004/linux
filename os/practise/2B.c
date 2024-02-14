//SJF
#include<stdio.h>
void main()
{
    int p[20],bt[20],wt[20],tat[20],i,k,n,temp;
    float wtavg,tatavg;
    printf("\nEnter the number of processes--\n");
    scanf("%d",&n);
    printf("\nEnter %d Burst Time for processes\n",n);
    for(i=0;i<n;i++)
    {
        p[i]=i;
        scanf("%d",&bt[i]);
    }
    for(i=0;i<n-1;i++)
        for(k=0;k<n-i-1;k++)
            if(bt[k]>bt[k+1])
            {
                temp=bt[k];
                bt[k]=bt[k+1];
                bt[k+1]=temp;
                temp=p[k];
                p[k]=p[k+1];
                p[k+1]=temp;
            }
    wt[0]=0;
    tat[0]=wt[0]+bt[0];
    wtavg=wt[0];
    tatavg=tat[0];
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tat[i]=wt[i]+bt[i];
        wtavg+=wt[i];
        tatavg+=tat[i];
    }
    printf("\n\tPROCESS\tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
    for(i=0;i<n;i++)
        printf("\n\tP%d\t\t%d\t\t%d\t\t%d\n",p[i],bt[i],wt[i],tat[i]);
    printf("\nAverage Waiting Time-- %f\n",(wtavg/n));
    printf("\nAverage TurnAround Time-- %f\n",(tatavg/n));
}