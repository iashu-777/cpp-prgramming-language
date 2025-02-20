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
    vector<ll>v;
    ll flag=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    
 
if(k==1){
    for(ll i=0;i<n-1;i++){
        if(v[i]>v[i+1]){
            cout<<"NO";
            flag=1;
            break;

        }
    }if(flag==0)
    cout<<"YES";
}
else{
    cout<<"YES";
}

cout<<"\n";
}
return 0;
}