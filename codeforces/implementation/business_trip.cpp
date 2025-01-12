#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    priority_queue<int>pq;
    cin>>k;
    for(int i=1;i<=12;i++){
        int t;
        cin>>t;
    pq.push(t);
    }
    int count=0;
    int water=0;
    while(!pq.empty()){
        if(water>=k){
            cout<<count;
            return 0;
        }
        count++;
        water+=pq.top();
        pq.pop();
    }
    if(water>=k){
            cout<<count;
            return 0;
        }
    cout<<-1;  // If water cannot be collected within 12 days
    return 0;
}