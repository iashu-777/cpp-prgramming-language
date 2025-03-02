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
    cin>>s;
    ll n=s.size();
    ll cab=0;
    ll cba=0;
    for(ll i=0;i<n-1;i++){
        if(s[i]=='b' &&s[i+1]=='a'){
            cba++;
        }
        else if(s[i]=='a' &&s[i+1]=='b'){
            cab++;
        }
    }
    // for(ll i=0;i<n-1;i++){
    //     if(s[i]=='b' &&s[i+1]=='a'){
    //         cba++;
    //         i++;
    //     }
    // }
    string ans=s;
    if(cba>cab){
        ll count=cba-cab;
        for(ll i=0;i<n-1;){
            if(count-- && ans[i]=='b'&&ans[i+1]=='a'){
                if(i>0 && ans[i-1]=='b')
                ans[i+2]='b';
                else
                ans[i]='a';
                i+=2;
            }
            else if(ans[i]=='a' &&ans[i+1]=='b'){
                i+=2;
            }
            else {
                i++;
            }
        }
    }
    else if(cab>cba){
        ll count=cab-cba;
        for(ll i=0;i<n-1;){
            if(ans[i]=='a'&&ans[i+1]=='b'&&count--){
                if(i>0 && ans[i-1]=='a')
                ans[i+2]='a';
                else
                ans[i]='b';
                i+=2;
            }
            else if(ans[i]=='b' &&ans[i+1]=='a'){
                i+=2;
            }
            else {
                i++;
            }
        }
    }
    cout<<ans<<"\n";
}
return 0;
}