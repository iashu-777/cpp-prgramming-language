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
if(n==1){
    cout<<1;
}
else if(n<4){
    cout<<"NO SOLUTION";
}
else{
    for(ll i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
for(ll i=1;i<=n;i+=2){
    cout<<i<<" ";
}
}
return 0;
}