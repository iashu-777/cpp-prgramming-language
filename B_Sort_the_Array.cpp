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
for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
}
int count=0;
for(ll i=1;i<n-1;i++){
    if(i==n-2){
        if(v[i]<v[0]){
            count++;
        }
    }
    if((v[i-1]>v[i] && v[i]<v[i+1]) || (v[i-1]<v[i] && v[i]>v[i+1])){
        count++;
    }
    if(count>1){
        cout<<"no";
        return 0;
    }
}
int k=v.size()-1;
for(ll i=0;i<n-1;i++){
    if(v[i]<v[i+1]){
      k=i;
      break;  
    }
}
cout<<"yes"<<endl;
cout<<1<<" "<<k+1;
return 0;
}
