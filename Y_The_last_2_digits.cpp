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
ll a,b,c,d;
cin>>a>>b>>c>>d;
ll ans=a%100*b%100*c%100*d%100;
// cout<<ans<<endl;
if((ans%100)<=9 && (ans%100)>=0){
    cout<<0<<ans;
}else
cout<<ans%100;
return 0;
}