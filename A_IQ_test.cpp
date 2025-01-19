#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>v;
ll ce=0;
ll co=0;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x%2==0){ce++;
    v.push_back(1);
    }
    else {
        v.push_back(0);
     co++;   
    }
}
ll hero=1;
if(co<ce){
    hero=0;
}
for(ll i=0;i<n;i++){
    if(v[i]==hero){
        cout<<i+1;
        break;
    }
}
return 0;
}