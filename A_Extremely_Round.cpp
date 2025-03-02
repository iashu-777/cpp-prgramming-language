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
    string s;
    ll ans=0;
    if(n<=10){
        ans+=n;
    }else if(n<=99){
        s=to_string(n);
        ans+=((s[0]-'0')+9);
    }
    else if(n<=999){
        s=to_string(n);
        ans+=((s[0]-'0')+18);
    }
    else if(n<=9999){
        s=to_string(n);
        ans+=((s[0]-'0')+27);
    }
    else if(n<=99999){
        s=to_string(n);
        ans+=((s[0]-'0')+36);
    }
    else if(n<=999999){
        s=to_string(n);
        ans+=((s[0]-'0')+45);
    }
    cout<<ans<<endl;
}
return 0;
}