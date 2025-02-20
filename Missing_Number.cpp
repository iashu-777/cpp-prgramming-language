#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll BinstringToDec(const string &s) {ll sum = 0; for (char c : s) sum = (sum << 1) | (c - '0'); return sum;}
string decToBinStr(ll n) { string ans = ""; while (n) {ans.push_back('0' + (n & 1)); n >>= 1;}reverse(ans.begin(), ans.end());return ans.empty() ? "0" : ans;}






int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll n;
cin>>n;
ll sum=0;
ll ax=(n*(n+1))/2;
loop(0,n-1,1){
    ll x;
    cin>>x;
    sum+=x;
}
cout<<ax-sum;
return 0;
}