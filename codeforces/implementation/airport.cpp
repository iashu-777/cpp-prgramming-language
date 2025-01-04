#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pqh;
    priority_queue<int,vector<int>,greater<int>>pqm;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int k;
        cin>>k;
        pqh.push(k);
        pqm.push(k);
    }
    int maxi=0,mini=0;
    for(int i=1;i<=n;i++){
        int top=pqh.top();
        maxi+=top;
        pqh.pop();
        if(top>1)
        pqh.push(top-1);
        int top1=pqm.top();
        mini+=top1;
        pqm.pop();
        if(top1>1)
        pqm.push(top1-1);
    }
    cout<<maxi<<" "<<mini;
    return 0;
}