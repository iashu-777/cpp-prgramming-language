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
    vector<ll>ans;
    ans.push_back(v[0]);
for(ll i=1;i<n;i++){
    if(v[i]>=v[i-1]){
        // cout<<v[i]<<" "; 
        ans.push_back(v[i]);
    }
    else{
        // cout<<v[i]-1<<" "<<v[i]<<" ";
        if(v[i]==1){
            ans.push_back(1);
        }else{
        ans.push_back(v[i]-1);}
        ans.push_back(v[i]);
    }
}
cout<<ans.size()<<endl;
for(auto x:ans){
    cout<<x<<" ";
 
}
cout<<endl;

}
return 0;
}