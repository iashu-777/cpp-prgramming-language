#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

bool ifap(ll a,ll b,ll c){
    return a+c==b+b;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x=a;
    ll y=b;
    ll z=c;
    ll sum=a+b+c;
    ll flag=0;
    if(ifap(x,y,z)){
        flag=1;
    }
    ll s=1;
    ll d=min(abs(a-b),abs(b-c));
    if(a==b || a==c ||c==b){
        s=max(a,max(b,c));
    }
    ll t=max(a,max(b,c));
    while(a<=2*t || b<=2*t || c<=2*t){
        a+=s;
        if(ifap(a,y,z)){
            if(a%x==0)
            flag=1;
        }
        b+=s;
        if(ifap(x,b,z)){
            if(b%y==0)
            flag=1;
        }
        c+=s;
        if(ifap(x,y,c)){
            if(c%z==0)
            flag=1;
        }
    }
    if(flag==1){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
return 0;
}