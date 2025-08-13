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
int n=100001;
vector<bool>v(n,1);
v[0]=0;
v[1]=0;
for(ll i=2;i<=n-1;i++){
    if(v[i]==1){
        v[i]=1;
        for(ll j=i*i;j<n;j=j+i){
            v[j]=0;
        }
    }
}
ll k;
cin>>k;
v[k]==1?cout<<"YES":cout<<"NO";
return 0;
}