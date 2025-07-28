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
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll e=min(min(min(a,b),c),d);
    if(e==b){
        cout<<"Gellyfish";
    }
    else if( e==d){
        cout<<"Gellyfish";
    }
    else if((e==a ||e==c) &&((e==b)||(e==d))){
        cout<<"Gellyfish";
    }
    else{
        cout<<"Flower";
    }

    cout<<endl;
}
return 0;
}