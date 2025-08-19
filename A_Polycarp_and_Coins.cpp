#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll x;
    cin>>x;
    ll a=0;
    ll b=0;
    ll r=x%3;
    if(r==1){
        a=(x/3)+1;
        b=x/3;
    }
    else if(r==2){
        a=(x/3);
        b=(x/3)+1;
    }
    else{
        a=(x/3);
        b=x/3;
    }
    cout<<a<<" "<<b<<endl;
}
return 0;
}