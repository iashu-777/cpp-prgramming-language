#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
    
    static ll co=1;
ll count(ll x){
    if(x>3){
    co=co*2;
    return (ll)count((ll)floor((long double)x/4));}
       else
        return co;
    }

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    cout<<count(n)<<endl;
    co=(ll)1;
}
return 0;
}