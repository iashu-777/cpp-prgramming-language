#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll sum=0;
    for(ll i=0;i<n-1;i++){
        ll x;
        cin>>x;
        sum+=x;
    }
    cout<<-sum<<endl;
}
return 0;
}