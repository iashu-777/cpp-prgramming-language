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
for(ll k=1;k<=t;k++){
    ll n;
    cin>>n;
    // if(t==1000 && k==653){
    //     cout<<"hi"<<n<<"hi";
    // }
    if(n%2!=0 || n<4){
        cout<<-1;
    }
    else{
        ll j=n/2;
        if(j==2){
            cout<<1<<" "<<1;
        }else
        cout<<(j+3-1)/3<<" "<<j/2;
    }
    cout<<"\n";
 
}
return 0;
}