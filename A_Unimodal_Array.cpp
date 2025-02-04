#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)



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

ll i=0;
while(i<n-1 && v[i]<v[i+1]){
    i++;
}
while(i<n-1 && v[i]==v[i+1]){
    i++;
}
while(i<n-1 && v[i]>v[i+1]){
    i++;
}
if(i==n-1)cout<<"YES";
else cout<<"NO";
cout<<"\n";

return 0;
}