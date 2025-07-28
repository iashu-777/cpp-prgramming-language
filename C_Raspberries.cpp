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
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    if(k!=4){

        ll maxi=0;
        for(auto x:v){
            maxi=max(maxi,x%k);
        }
        ll flag=0;
        for(auto x:v){
            if(x%k==0){
                cout<<0<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<k-maxi<<endl;
    }
    else{
        unordered_map<ll,ll>mpp;
        for(auto x:v){
            mpp[x%k]++;
        }
        ll mini=3;
        if(mpp[2]>=1 || mpp[1]>=2){
            mini=min(mini,(long long)2);
        }
        if(mpp[3]>=1 || (mpp[1]>=1 &&mpp[2]>=1)){
            mini=min(mini,(long long)1);
            
        }
        if(mpp[2]>=2 || mpp[0]>=1){
            mini=min(mini,(ll)0);
        }
        if(mpp[1]>=1){
            mini=min(mini,(ll)3);
        }
        cout<<mini<<endl;
    }
}
    return 0;
}