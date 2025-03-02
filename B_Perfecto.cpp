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
unordered_map<ll,ll>mpp;
for(ll x=0;x<=10000;x++){
    mpp[x*x]++;
}
while(t--){
    ll n;
    cin>>n;
    vector<ll>v;
    if(n==1){
        cout<<-1;
    }
    else if(n==2){
        cout<<2<<" "<<1;
    }
    else if(n==3){
        cout<<3<<" "<<2<<" "<<1;
    }
    else {
        ll k=sqrt(n);
        
        if(mpp.find(k)!=mpp.end()){
            k--;
        }
        for(ll i=k+1;i<=n;i++){
            v.push_back(i);
        }
        for(ll i=1;i<=k;i++){
            v.push_back(i);
        }    
        for(auto x:v){
            cout<<x<<" ";
        }
    }
    
    cout<<"\n";
}
return 0;
}