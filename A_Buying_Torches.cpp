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
for(ll tt=1;tt<=t;tt++){
    ll x,y,k;
    cin>>x>>y>>k;
    // if(t==20000 && tt==441){
    //     cout<<"Hi"<<x<<"hi"<<y<<"hi"<<k<<"hi";
    // }
    ll a=k;
    ll b=((y*k)+(x-1)-1)/(x-1);

    //x-1  *  b sticks we have , jisme se y*k sstick removed 
    //if x-1 *b -(y*k) >=k-1 then we dont have to need another c stick

    ll rem=(x-1)*b-(y*k)+1; //stick left from coal trades

    ll c=(k-rem+x-1-1)/(x-1);
    if(rem>=(k))
    cout<<a+b<<endl;
    else
    cout<<a+b+c<<endl;
}
return 0;
}