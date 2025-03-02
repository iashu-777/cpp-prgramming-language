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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0){
            v.push_back(0);
        }
        else{
            v.push_back(1);
        }
    }

    ll count=1;
    ll opr=0;
    for(ll i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            count++;
        }
        else{
            if(count>=2){
                opr+=(count-1);
            }
            count=1;
        }
    }
    if(count>=2){
        opr+=(count-1);
    }
    cout<<opr<<"\n";
 
}
return 0;
}