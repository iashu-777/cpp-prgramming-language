#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v(n+1);
for(ll i=1;i<=n;i++){

// ll x;
cin>>v[i];
// v.emplace_back(x);
}
vector<ll>marked(n+1,0);

// for(ll i=1;i*i<=n;i++){
//     vector<ll>temp;
//     if(!marked[i]){
//         for(ll j=i*i;j<=n;j=j+i){
//             marked[j]=1;
//             temp.push_back(v[j]);
//         }
//         sort(temp.begin(),temp.end());
//         ll k=0;
//         for(ll j=i*i;j<=n;j=j+i){
//             v[j]=temp[k++];
//         }
//     }
// }
for(ll i=1;i<=n;i++){
    if(marked[i]) continue;

    vector<ll> temp;
    vector<ll> idx;

    ll cur = i;
    while(cur <= n){
        marked[cur] = 1;
        idx.push_back(cur);
        temp.push_back(v[cur]);
        cur = cur * 2;
    }

    sort(temp.begin(), temp.end());

    for(ll k=0;k<idx.size();k++){
        v[idx[k]] = temp[k];
    }
}

ll flag=0;
for(ll i=1;i<n;i++){
    if(v[i]<=v[i+1]){
        continue;
    }
    else{
        flag=1;
        break;
    }
}
if(flag==1)cout<<"NO";
else cout<<"YES";
cout<<endl;
}

return 0;
}