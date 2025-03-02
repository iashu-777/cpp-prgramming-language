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

for(ll j=1;j<=t;j++){
    ll n;
    cin>>n;
    vector<ll>v;
    loop(0,n,1) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    // if(j==18 && t==1000){
    //     cout<<endl;
    //     for(auto x:v){
    //         cout<<x<<" ";
    //     }
    //     cout<<endl;
    // }
    ll count=2;
    ll flag=0;
    ll fl=0;
    for(ll i=1;i<n-1;i++){
        if(v[i]!=0 && v[i+1]==0 && v[i-1]==0){
            count=1;
            break;
        }
        if(v[i]==0){
            fl=1;
        }
    }
    if(fl==1 && (v[0]!=0 || v[n-1]!=0)){
         count=1;
    }
    for(auto x:v){
        if(x!=0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<0;
    }
    else{
        cout<<count;
    }
    cout<<endl;
    // if(t==1000 && )
    // cout<<count<<"\n";
 
}
return 0;
}