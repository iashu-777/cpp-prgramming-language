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
unordered_map<ll,ll>mpp;
for(auto x:v){
    mpp[x]++;
}
// ll count=1;
// for(ll i=0;i<n-1;i++){
//     if(v[i]!=v[i+1]){
//         count++;
//     }
// }
ll count=mpp.size();
if(count==1){
    cout<<"Yes";
}
else if(count==2){
    vector<ll>c;
    for(auto x:mpp){
        c.push_back(x.second);
    }
    ll diff=abs(c[0]-c[1]);
    if(diff==1 || diff==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
else{
    cout<<"No";
}

cout<<"\n";
 

}
return 0;
}