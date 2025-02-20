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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll flag=0;
    for(ll i=0;i<n-1;i++){
        if(v[i]==v[i+1]){
            flag=2;
            break;
        }
    }
    for(ll i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<0;
    }
    else if(flag==2){
        cout<<1;
    }
    else{
        ll mini=INT_MAX;
        for(ll i=1;i<n;i++){
            mini=min(mini,v[i]-v[i-1]);
        }
        // if(mini%2==0){
        //     cout<<mini;
        // }
        // else{
            cout<<(mini/2)+1;
        // }
    }
    cout<<"\n";
 
}
return 0;
}