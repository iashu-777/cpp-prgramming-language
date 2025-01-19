#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
vector<ll>vec;
for(ll i=1;i<=n;i++){
vec.push_back(i*i);
}
ll count=0;
unordered_map<ll,ll>mpp;
for(auto x:vec){
    mpp[x]++;
}
for(ll i=0;i<n;i++){
    for(ll j=i+1;j<n-1;j++){
        if(mpp.find(vec[i]+vec[j])!=mpp.end()){
            count++;
        }
    }
}
cout<<count;
return 0;
}   