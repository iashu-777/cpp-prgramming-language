# #include<bits/stdc++.h>
# using namespace std;
# #define ll long long
# #define mod 998244353
# #define loop(a,b,c) for(ll i=a;i<b;i+=c)
# ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
# ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
# ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
# vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
#  ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
# long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }


# ll binpow(ll a, ll b, ll r) {
#     ll res = 1;
#     a%=r;
#     while (b > 0) {
#         if (b & 1) res = res * a;
#         // if(a*a >LLONG_MAX)return LLONG_MAX;
#         a = (a * a)%r;
#         b >>= 1;
#     }
#     return res;
# }


# int main(){
# ios_base::sync_with_stdio(false);
# cin.tie(NULL);
# cout.tie(NULL);
# ll l,r,k;
# cin>>l>>r>>k;
# ll i=0;
# ll flag=0;
# while(binpow(k,i,r)<=r){
#     // if(binpow(k,i)>=INT_MAX)break;
#     if(binpow(k,i,r)>=l){
#         cout<<binpow(k,i,r)<<" ";
#         flag=1;
#     }
#     i++;
# }
# if(flag==0){
#     cout<<-1;
# }
# return 0;
# }

#input three numbers in a line
l,r,k=map(int,input().split())
i=0
flag=0
while(k**i <=r):
    if(k**i >=l):
        print(k**i,end=" ")
        flag=1
    
    i+=1

if(flag==0):
    print(-1)
