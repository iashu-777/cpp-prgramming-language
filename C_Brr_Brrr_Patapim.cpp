#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    vector<vector<ll>>v;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        vector<ll>temp;
        for(ll j=0;j<n;j++){
            ll x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    vector<ll>ans;
    ll sum=0;
    for(ll i=0;i<n;i++){
        ans.push_back(v[0][i]);
        sum+=v[0][i];
    }
    for(ll i=1;i<n;i++){
        ans.push_back(v[i][n-1]);
        sum+=v[i][n-1];
    }
    ll el=(((2*n)*(2*n+1))/2)-sum;
    cout<<el<<" ";
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    
}
return 0;
}