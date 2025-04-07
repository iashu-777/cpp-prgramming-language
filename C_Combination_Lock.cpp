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
    if(n%2==0){
        cout<<-1;
    }
    else{
        for(ll i=1;i<=n;i++){
            if(i%2!=0){
                cout<<i<<" ";
            }
        }
        for(ll i=1;i<=n;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    cout<<endl;
}
return 0;
}