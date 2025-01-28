#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
string s;
cin>>s;
unordered_map<char,ll>mpp;
for(auto x:s){
    mpp[x]++;
}
priority_queue<pair<ll,char>>pq;
for(auto x:mpp){
    pq.push({x.second,x.first});
}
ll ans=0;

while(k!=0 || !pq.empty()){
    pair<ll,char>x=pq.top();
        if(x.first<k){
        ans+=(x.first*x.first);
        k=k-x.first;
        }
        else{
            ans+=(k*k);
        k=0;
        }
        pq.pop();
}
cout<<ans;
return 0;
}