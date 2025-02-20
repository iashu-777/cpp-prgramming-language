#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll>v;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
        pq.push(x);
    }
    ll time=b;
    ll mini=INT_MAX;
    ll count=0;
  for(auto x:v){
    count+=min(a-1,x);
  }
cout<<count+b<<endl;
}
return 0;
}