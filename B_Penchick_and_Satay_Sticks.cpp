#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)

string func(vector<ll>&v){
    ll n=v.size();
    if(n==1){
        return "YES";
    }
    if(n==2){
        if(v[0]>v[1] && (v[0]-v[1]==1)){
            swap(v[0],v[1]);
        }
        if(v[0]<v[1]){
            return "YES";
        }
        return "NO";
    }
    for(ll i=0;i<n-2;i++){
        if(v[i]>v[i+1] && (v[i]-v[i+1]==1)){
            swap(v[i],v[i+1]);
        }
        if(v[i+1]>v[i+2] && (v[i+1]-v[i+2]==1)){
            swap(v[i+1],v[i+2]);
        }
        if(!(v[i]<v[i+1] && v[i+1]<v[i+2])){
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
    loop(0,n,1) {
        ll x;
        cin>>x;
        v.push_back(x);
    }
    string res = func(v);
    cout<<res<<endl;
 
}
return 0;
}