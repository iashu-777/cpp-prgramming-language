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
cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

while(t--){
    string s;
    getline(cin,s);
    string ans;
    ans+=s[0];
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            ans+=s[i+1];
        }
    }
    cout<<ans<<endl;

}
return 0;
}