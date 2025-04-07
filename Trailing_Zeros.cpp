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
ll n;
cin>>n;
ll ans=0;
if(n<=4){
    cout<<0;
}
else{
    if(n%5==0){
        ans+=(n/5);
    }
    else{
        ans+=((n/5)-1);
    }
    ll k=n/10;
    if(k%2==0){
        ans+=((k/2)-1);
    }
    else{
        ans+=((k/2)-1);
    }
    cout<<ans;
}

return 0;
}