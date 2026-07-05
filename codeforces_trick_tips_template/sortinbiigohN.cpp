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



void sortit(vector<int> &arr, int base = 1 << 15) {
    int n = arr.size();
    
    vector<vector<int>> grps(base);
    vector<int> cnts(base + 1), live(base);
    for (int i = 0; i < n; i++) {
        int z = arr[i] / base;  
        grps[arr[i] % base].push_back(z);//adding each element in respective group
        cnts[z + 1]++;//increasing count
    }
    for (int i = 1; i < base; i++) cnts[i] += cnts[i - 1]; //making prefix array
    
    for (int i = 0; i < base; i++) {
        for (int &x : grps[i]) arr[cnts[x] + live[x]++] = x * base + i;
    }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
vector<int>v={343,233,6,234,12,5645};
sortit(v);
for(auto x:v)cout<<x<<" ";
return 0;
}