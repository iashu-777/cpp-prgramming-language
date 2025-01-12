#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
deque<int>dq;
unordered_map<int,int>mpp;
for(int i=0;i<n;i++){
    int t;
    cin>>t;
    dq.push_back(t);
    mpp[t]++;
}
int count=0;
for(int i=0;i<n;i++){
    if(mpp.size()==1){
        cout<<count;
        return 0;
    }
    else{
        dq.push_back(dq[k-1]);
        mpp[dq[k-1]]++;
        int t=dq.front();
        dq.pop_front();
        mpp[t]--;
        if(mpp[t]==0)
        mpp.erase(t);
        count++;
    }
}
cout<<-1;
    return 0;   
}