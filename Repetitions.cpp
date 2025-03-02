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
string s;
cin>>s;
ll n=s.size();
ll count=1;
ll maxi=1;
for(ll i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        count++;
    }
    else{
        maxi=max(maxi,count);
        count=1;
    }
}
maxi=max(maxi,count);
cout<<maxi<<endl;

return 0;
}