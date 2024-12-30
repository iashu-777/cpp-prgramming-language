#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<vector<int>>door;
    while(t--){
        int k,l;
        cin>>k>>l;
        door.push_back({k,l});
    }
    int countz=0,counto=0;
    int ans=0;
    for(auto x:door){
        if(x[0]==0)countz++;
        if(x[0]==1)counto++;
    }
    ans+=min(counto,countz);
    countz=0,counto=0;
    for(auto x:door){
        if(x[1]==0)countz++;
        if(x[1]==1)counto++;
    }
    ans+=min(counto,countz);
    cout<<ans;
    return 0;

}