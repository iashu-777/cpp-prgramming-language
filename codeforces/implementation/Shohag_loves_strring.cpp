#include<bits/stdc++.h>
using namespace std;
string func(string s){
    unordered_map<char,int>mpp;
    int n=s.size();
    for(auto x:s){
        mpp[x]++;
    }
    int total_sub=(n*(n+1))/2;
    for(auto x:mpp){
        if(x.second>1){
            total_sub-=((x.second*(x.second-1))/2);
        }
    }
    if(total_sub!=1)
    total_sub-=1;
    if(total_sub%2==0){
        return s;
    }
    while(s.size()!=0){
        if(!s.empty()){
            char j=s[s.size()-1];
            s.pop_back();
            mpp[j]--;
        }
        else
        return "-1";
        for(auto x:mpp){
        if(x.second>1){
            total_sub-=((x.second*(x.second+1))/2);
        }
    }
    if(total_sub%2==0){
        return s;
    }

    }
    return "-1";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans=func(s);
        if(ans=="-1")
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
}