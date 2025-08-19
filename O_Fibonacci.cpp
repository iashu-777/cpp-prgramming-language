// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

// ll fib(ll n){
//     if(n<=1){
//         return n;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll n;
// cin>>n;
// cout<<fib(n-1);
// return 0;
// }

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
if(n==1)cout<<0;
else if(n==2)cout<<1;
else{
    ll a=0;
    ll b=1;
    ll c;
    for(ll i=3;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c<<endl;
}
return 0;
}