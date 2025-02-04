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
    ll n;
    cin>>n;
    vector<ll>v;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    unordered_map<ll,ll>mpp;
    ll sum=v[0];
    ll count=0;
    vector<ll>prefix;
    loop(0,n,1){
        prefix.push_back(sum);
        sum+=v[i];
    }
    loop(0,n,1){
        mpp[v[i]]++;
        if(mpp.find(sum)!=mpp.end()){
            count++;
        }
        sum+=v[i];
        
    }
    cout<<count<<"\n";
 
}
return 0;
}