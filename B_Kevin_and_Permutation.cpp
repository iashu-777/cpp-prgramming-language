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
    ll n,k;
    cin>>n>>k;
    ll t=n;
    ll j=1;
    for(ll i=1;i<=n;i++){
        if(i%k==0){
            cout<<j<<" ";
            j++;
        }
        else{
            cout<<t<<" ";
            t--;
        }
    }
   
    cout<<"\n";
}
return 0;
}