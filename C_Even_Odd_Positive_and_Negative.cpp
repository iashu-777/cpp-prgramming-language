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
ll even=0;
ll odd=0;
ll pos=0;
ll neg=0;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%2==0){
        even++;
    }
    if(x%2!=0){
        odd++;
    }
    if(x>0){
        pos++;
    }
    if(x<0){
        neg++;
    }
}
cout<<"Even: "<<even<<endl;
cout<<"Odd: "<<odd<<endl;
cout<<"Positive: "<<pos<<endl;
cout<<"Negative: "<<neg<<endl;
return 0;
}