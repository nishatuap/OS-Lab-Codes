#include<iostream>
#include<cstdio>
using namespace std;

struct process
{
    char n[10];
    int t;
    int v;
};
int main()
{
     freopen("lab3.txt","r",stdin);

    int n,sum=0;
    double avg;
    scanf("%d",&n);
    struct process p[10],temp;

     for(int i = 0; i < n; i++){

        scanf("%s %d %d",p[i].n,&p[i].t,&p[i].v);
        }
     for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(p[i].v>p[j].v){
                    temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }

    cout<<"0 ";
    for(int i=0;i<n;i++){
        if(i>0){
            p[i].t=p[i-1].t+p[i].t;
        }
        if(i!=n-1){
        printf("%s %d ",p[i].n,p[i].t);
        sum=sum+p[i].t;
        }
        if(i==n-1)
        printf("%s %d",p[i].n,p[i].t);


    }
    cout<<"\n"<<endl;
    avg=(double)sum/n;
     printf("Average: %.2lf",avg);


    return 0;
}
