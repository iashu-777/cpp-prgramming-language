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
    ll n,k,x;
    cin>>n>>k>>x;
    ll sum=(n*(n+1))/2;
    ll mini=k*(k+1)/2;
    ll maxi=sum-(((n-k)*(n-k+1))/2);
    if(x>=mini && x<=maxi){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<"\n";
}
return 0;
}