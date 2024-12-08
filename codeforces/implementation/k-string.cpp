#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    map<char,int>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    for(auto x:mpp){
        if(x.second%k!=0){
            cout<<-1;
            return 0;
        }
    }
    string ans;
    while(mpp.size()!=0){
        for(auto x:mpp){
            ans+=x.first;
            mpp[x.first]--;
            if(mpp[x.second]==0){
                mpp.erase(x.first);
            }
        }
    }
    cout<<ans;
    return 0;
}