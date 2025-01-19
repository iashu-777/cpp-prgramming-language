#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll sum=0;
    vector<ll> v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        sum+=(x%3);
    }
    cout<<abs((n/3)*2-sum)<<" "<<-sum<<endl;
}
return 0;
}