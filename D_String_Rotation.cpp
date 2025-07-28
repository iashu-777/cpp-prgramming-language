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
   string mini=s;
   set<string>p;
   sort(s.begin(),s.end());
    do{
        // cout<<s<<endl;
        // mini=min(mini,s);
        p.insert(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<*p.begin()<<endl;

    // for(auto x:p){
    //     cout<<x<<endl;
    // }
}

return 0;
}