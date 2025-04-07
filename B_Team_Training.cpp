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
    ll n,x;
    cin>>n>>x;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll p;
        cin>>p;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    ll count=0;
    for(ll i=n-1;i>=0;i--){
        if(v[i]>=x){
            count++;
        }
        else{
            ll l=0;
            for(ll k=i;k>=0;k--,i--){
                l++;
                if(l*v[k]>=x){
                    l=0;
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
return 0;
}