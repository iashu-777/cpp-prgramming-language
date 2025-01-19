#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod (ll)1000000007
ll func(ll n){
    ll ans = 1;
    for (int i = 1; i <= sqrt(n); i++) {
        if(ans>=mod)
        ans%=mod;
        if (n % i == 0) {
            ans*=i; // i is a divisor
            if(ans>mod)
        ans%=mod;
            if (i != (n / i)%mod) {
                ans*=((n/i)%mod);
            }
            if(ans>mod)
        ans%=mod;
        }
        if(ans>mod)
        ans%=mod;
    }
    return ans;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll n;
    cin>>n;
    ll product=1;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(product>mod)
        product%=mod;
        product*=x;
    }
    cout<<func(product)%mod;
    
return 0;
}