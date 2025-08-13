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
ll aa=min(a,min(b,c));
ll bb=max(a,max(b,c));
ll cc=(a+b+c)-(aa+bb);
cout<<aa<<endl<<cc<<endl<<bb<<endl<<endl<<a<<endl<<b<<endl<<c<<endl;
return 0;
}