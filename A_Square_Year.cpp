#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
unordered_map<ll,pair<ll,ll>>mpp;
for(int i =0;i<=50;i++){
    for(int j=0;j<=50;j++){
        mpp[(i+j)*(i+j)]={i,j};
    }
}
ll t;
cin>>t;

while(t--){
    string n;
    cin>>n;
    ll k=stoll(n);
    if(mpp.find(k)!=mpp.end()){
        cout<<mpp[k].first<<" "<<mpp[k].second;
    }
    else{
        cout<<-1;
    }
    cout<<endl;
}
return 0;
}