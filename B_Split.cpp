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
vector<ll>v;
unordered_map<ll,ll>mpp;
for(ll i=0;i<2*n;i++){
ll x;
cin>>x;
mpp[x]++;
v.emplace_back(x);
}

// sort(v.begin(),v.end());
// vector<ll>a;
// vector<ll>b;
// ll flag=0;
// for(ll i=0;i<2*n;i++){
//     if(a.size()==n && b.size()==n)break;
//     if(a.size()==n){
       
//         if(b.size()!=n){
//             b.push_back(v[i]);
//             continue;
//         }
//     }
//         if(a.size()!=n)
//         a.push_back(v[i]);
//         // i++;
//     while(i<2*n-1 && v[i]==v[i+1]){
//         if(b.size()==n){
//             if(a.size()!=n){
//                 a.push_back(v[i]);
//                 continue;
//             }
//         }
//         if(b.size()!=n){

//             b.push_back(v[i]);
//         }
//         i++;
        
//     }
// }
// for(auto x:a){
//     // cout<<x<<" ";
//     mpp[x]++;
// }

// ll c=0;
// for(auto x:mpp){
//     if(x.second%2!=0){
//         c++;
//     }
// }
// mpp.clear();
// for(auto x:b){
//     // cout<<x<<" ";
//     mpp[x]++;
// }
// ll m=0;
// for(auto x:mpp){
//     if(x.second%2!=0){
//         m++;
//     }
// }
// cout<<c+m;
ll count=0;
for(auto x:mpp){
    if(x.second%2!=0){
        count++;
    }
    else{
        if(x.second/2%2!=0){
            count+=2;
        }
    }
}
cout<<count;
cout<<endl;
}

return 0;
}

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
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}



}

return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

return 0;
}