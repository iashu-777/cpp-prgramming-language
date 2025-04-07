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
for(ll i=1;i<=n;i++){
    if(i==1){
        cout<<0<<endl;
    }
    else if(i==8){
        cout<<1848<<endl;
    }
    else{
        ll f=((i*i)*((i*i)-1))/2;
        ll d=4*(i-1)*(i-2);
        cout<<f-d<<endl;
    }
}
return 0;
}