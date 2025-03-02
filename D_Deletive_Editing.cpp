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
    string s;
    string t;
    cin>>s>>t;
    ll i=0;
    ll j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else{
            if(s.find(s[i])!=string::npos)
            s.erase(s.find(s[i]),1);
        }
    }
    while(i<s.size()){
        s.erase(s.find(s[i]),1);
        // i++;
    }
    // cout<<s<<" "<<t<<endl;
    if(s==t){
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
return 0;
}