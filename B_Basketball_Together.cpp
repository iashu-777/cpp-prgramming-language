#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll n,d;
cin>>n>>d;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
sort(v.begin(),v.end());
ll summ=0;

// for(ll i=n-1;i>=0;i--){
// //    ll left= (d+v[i]-1)/v[i];
// // //    if(d==v[i])i--;
// ll left = d / v[i] + 1;
//    if(left>i+1){
//     break;
//    }
//    i=i-(left-1);
//    summ++;
// }
// if(v[n-1]*n<=d){
//     cout<<0;
// }else
// cout<<summ;
ll l = 0;                 // <-- NEW: left pointer for weakest players

    for(ll i = n-1; i >= 0; --i){
        ll need = d / v[i] + 1;       // strictly > d
        ll avail = i - l + 1;         // players available in [l..i]
        if(need > avail) break;       // not enough players to form this team
        l += (need - 1);              // use (need-1) weakest as fillers
        summ++;                       // team formed with max v[i]
    }

cout<<summ;
return 0;
}