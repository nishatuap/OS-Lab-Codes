#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n,m,sum=0,x,y,h;
    cout<<"Enter the max range of disk: ";
    cin>>m;
    cout<<"Enter the size of queue: ";
    cin>>n;
    cout<<"Enter the queue of disk positions:\n";
    vector <int> a(n),b;
    map <int,int> mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }

    cout<<"Enter the initial head position: ";
    cin>>h;
    int temp=h;
    int ele;
    b.push_back(h);
    int count=0;
    while(count<n){
        int diff=999999;
        for(auto q:mp){
            if(abs(q.first-temp)<diff){
                ele=q.first;
                diff=abs(q.first-temp);
            }
        }

        mp[ele]--;
        if(mp[ele]==0){
            mp.erase(ele);
        }

        b.push_back(ele);
        temp=ele;
        count++;
    }
    cout<<"Path: ";
    cout<<b[0];
    temp=b[0];
    for(i=1;i<b.size();i++){
        cout<<" "<<b[i];
        sum+=abs(b[i]-temp);
        temp=b[i];
    }
    cout<<'\n';
    cout<<"Total head movements = "<< sum<<" cylinders";
    return 0;
}
