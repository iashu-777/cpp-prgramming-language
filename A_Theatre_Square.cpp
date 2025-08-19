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
ll a,b,c;
cin>>a>>b>>c;
// ll ans=1;
// ans+=(a-1)/c;
// ans+=(b-1)/c;
// if(a>c && b>c){
//     cout<<ans+1;
// }else
// cout<<ans;
cout<<(ll)ceil((long double)a/c)*(ll)ceil((long double)b/c);
return 0;
}