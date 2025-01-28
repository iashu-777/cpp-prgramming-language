#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

string func(ll n, vector<ll>&v,string s){
    unordered_map<char,unordered_set<ll>>mpp;
    for(ll i=0;i<n;i++){
        mpp[s[i]].insert(v[i]);
        if(mpp[s[i]].size()>1){
            return "NO";
        }
    }
    return "YES";
}

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
    ll m;
    cin>>m;
    for(ll i=0;i<m;i++){
        string s;
        cin>>s;
        if(n==s.size())
        cout<<func(n,v,s)<<"\n";
        else
        cout<<"NO\n";
    }
}
return 0;
}