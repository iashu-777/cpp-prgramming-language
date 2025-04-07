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
    char r;
    cin>>r;
    string s;
    cin>>s;
    string k=s+s;
    ll i=0;
    ll count=1;
    ll maxi=INT_MIN;
    while(i<2*n){
        if(k[i]==r){
            while(i<2*n && k[i]!='g'){
                i++;
                count++;
            }
            maxi=max(maxi,count);
            count=1;
        }
       i++;
    }
    cout<<maxi-1<<endl;
}
return 0;
}