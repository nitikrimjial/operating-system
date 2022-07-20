#include<stdio.h>
void main ()
{  
    int i,n,sum,wt,tat,twt,ttat;
    int t[10];
    float awt,atat;
    printf("Enter no. of processes:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter burts time of process %d:", i+1);
        scanf("%d",&t[i]);
    }
    printf("\n Process I/O\tWaiting Time\t Turn Around Time\t");

printf("\t \t \t \t%d\n",t[0]);
sum=0;
twt=0;
tat=t[0];
for (i=0;i<n;i++){
    sum +=t[i-1];
    wt=sum;
    tat=sum+t[i];
    twt=twt+wt;
    ttat=ttat+tat;
    printf("\n%d\t\t%d\t\t%d",i+1,wt,tat);
    printf("\n\n");
}
awt=(float)twt/n;
atat=(float)ttat/n;
printf("\n Average Waiting Time: %.4lf",awt);
printf("\nAverage Turn Around Time: %.4lf",atat);
}