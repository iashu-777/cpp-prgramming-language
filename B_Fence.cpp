#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n,k;
cin>>n>>k;
vector<ll>v;
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
ll i=0;
ll j=k-1;
ll sum=0;
ll curr_sum=0;
for(ll k=i;k<=j;k++){
    curr_sum+=v[k];
}
sum=curr_sum;
ll ind=1;
while(i<n && j<n-1){
    j++;
    i++;
    curr_sum-=v[i-1];
    curr_sum+=v[j];
    if(curr_sum<sum){
        sum=curr_sum;
        ind=i+1;
    }
}
cout<<ind;
return 0;
}