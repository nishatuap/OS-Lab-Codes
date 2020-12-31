#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m,sum=0,x,y,h;
    cout<<"Enter the max range of disk: ";
    cin>>m;
    cout<<"Enter the size of queue: ";
    cin>>n;
    cout<<"Enter the queue of disk positions:\n";
    vector <int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter the initial head position: ";
    cin>>h;
    cout<<"Path: ";
    int temp=h;
    cout<<temp;
    for(i=0;i<n;i++){
        cout<<" "<<a[i]<<' ';
        sum+=abs(a[i]-temp);
        temp=a[i];
    }
    cout<<'\n';
    cout<<"Total head movements = "<< sum<<" cylinders";
    return 0;
}
