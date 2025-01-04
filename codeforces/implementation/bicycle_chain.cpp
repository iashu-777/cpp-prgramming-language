#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>pedal(n);
    for(int i=0;i<n;i++){
        cin>>pedal[i];
    }
    int m;
    cin>>m;
    vector<int>rear(m);
    for(int i=0;i<m;i++){
        cin>>rear[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(rear[j]%pedal[i]==0){
                mpp[rear[j]/pedal[i]]++;
            }
        }
    }
    auto it=mpp.rbegin();
    cout<<it->second;
    return 0;
}