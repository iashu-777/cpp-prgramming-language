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
    ll n;
    cin>>n;
    ll ans=0;
   
    ll k=n/15;
    ll j=n%15;
    if(j>2)
    k++;
    ans=((k)*3);
    if(j==0 || j==1||j==2){
        ans+=(j+1);
    }
    cout<<ans<<"\n";
 
}
return 0;
}   