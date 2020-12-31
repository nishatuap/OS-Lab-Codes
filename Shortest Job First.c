#include<stdio.h>

int sum[10000];

int main()
{
    int n,i,j,temp;
    float avg=0;

    scanf("%d",&n);

    int time[n];
    int copy[n];

    for(i=1;i<=n;i++)
    {
        printf("Enter thje burt time for process %: ",i);
        scanf("%d",&time[i]);
        copy[i]=time[i];
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(time[j+1]<time[j])
            {
                temp=time[j+1];
                time[j+1]=time[j];
                time[j]=temp;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+time[i];
        avg+=sum[i-1];
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(time[i]==copy[j])
            {
                time[i]=j;
                break;
            }

        }
    }


    printf("\nGANTT Chart: 0 ");
    for(i=1;i<=n;i++)
        printf("p%d %d ",time[i],sum[i]);

    printf("\n\nAvarage waiting time: %.2f\n",avg/n);

    return 0;
}

