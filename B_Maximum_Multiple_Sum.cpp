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
    ll maxi=INT_MIN;
    ll ans=0;
    loop(2,n+1,1){
        ll d=n/i;
        ll ap=((d)*(i+(i*d)))/2;
        if(ap>maxi){
            maxi=ap;
            ans=i;
        }
    }
    cout<<ans<<"\n";
 
}
return 0;
}