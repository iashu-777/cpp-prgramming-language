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
    string s;
    cin>>s;
    unordered_map<char,ll>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    ll count=0;
    for(auto x:mpp){
        if(x.second%2!=0){
            count++;
        }
    }
    if(count==k || count==k+1 ||k>count){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
return 0;
}