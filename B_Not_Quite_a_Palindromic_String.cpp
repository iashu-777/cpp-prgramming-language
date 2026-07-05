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

for(ll i=1;i<=t;i++){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    // if(t==10000 && i==193){
    //     cout<<k<<"hi"<<s<<"hi";
    // }
  ll cone=0;
  ll czero=0;
  for(auto x:s){
    if(x=='1')cone++;
    else czero++;
  }
  cone=cone/2;
  czero=czero/2;
  ll flag=0;
  ll start=abs(czero-cone);
  ll end=czero+cone;
  for(ll i=start; i<=end;i+=2){
    if(i==k){
        flag=1;
break;
        }    }
  
    if(flag==1)cout<<"YES";
    else cout<<"NO";
    cout<<endl;

}
return 0;
}