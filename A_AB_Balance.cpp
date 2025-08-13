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
    //count ab
    ll ab,ba;
    ab=ba=0;
    for(ll i=0;i<n-1;){
        if(s[i]=='a' && s[i+1]=='b'){
            ab++;
            i++;
        }
        else if(s[i]=='b' && s[i+1]=='a'){
            ba++;
            i++;
        }
        else{
            i++;
        }
    }
    if(ab==ba){
        cout<<s<<endl;
    }else if(ab>ba){

        for(ll i=0;i<n-1;i++){
            if(s[i]=='a' && s[i+1]=='b'){
                s[i+1]='a';
                break;
            }
        }
        cout<<s<<endl;

    }
    else{
        for(ll i=0;i<n-1;i++){
            if(s[i]=='b' && s[i+1]=='a'){
                s[i+1]='b';
                break;
            }
        }
        cout<<s<<endl;
    }
}
return 0;
}