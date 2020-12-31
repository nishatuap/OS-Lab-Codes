#include<stdio.h>

int sum[10000];

int main()
{
    int n,i;
    float avg=0;

    scanf("%d",&n);

    int time[n];

    for(i=1;i<=n;i++)
    {
        printf("Enter thje burt time for process %: ",i);
        scanf("%d",&time[i]);
        sum[i]=sum[i-1]+time[i];
        avg+=sum[i-1];
    }
    printf("\nGANTT Chart: 0 ");
    for(i=1;i<=n;i++)
        printf("p%d %d ",i,sum[i]);

    printf("\n Avarage waiting time: %.2f\n",avg/n);

    return 0;
}

