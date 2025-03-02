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
    ll n,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b){
        cout<<"Yes";
    }
    else if((n-(a+b))>=2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    cout<<"\n";
 
}
return 0;
}