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
string s;
string p;
cin>>s;
cin>>p;

ll flag=0;
for(int i=0;i<t;i++){
    if(s[i]=='o'&&p[i]=='o'){
        cout<<"Yes";
        flag=1;
        break;
    }
}
if(flag==0)
cout<<"No";
return 0;
}