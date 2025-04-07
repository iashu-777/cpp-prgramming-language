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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,ll>mpp;
    vector<ll>v1;
    vector<ll>v2;
    ll count=0;
    for(ll i=0;i<n;i++){
        if(mpp.find(s[i])==mpp.end()){
            mpp[s[i]]++;
            count++;
        }
        v1.push_back(count);
    }
    mpp.clear();
    count=0;
    for(ll i=n-1;i>=0;i--){
        if(mpp.find(s[i])==mpp.end()){
            mpp[s[i]]++;
            count++;
        }
        v2.push_back(count);
    }
    reverse(v2.begin(),v2.end());
    ll maxi=INT_MIN;
    for(ll i=0;i<n-1;i++){
        maxi=max(maxi,v1[i]+v2[i+1]);
    }
    cout<<maxi<<endl;


}
return 0;
}