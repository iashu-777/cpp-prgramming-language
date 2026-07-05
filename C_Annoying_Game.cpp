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

pair<ll, vector<int>> maxSubarrayKadane(const vector<ll>& arr) {
    ll maxSum = LLONG_MIN, curSum = 0;
    int start = 0, bestL = 0, bestR = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (curSum <= 0) {
            curSum = arr[i];
            start = i;
        } else {
            curSum += arr[i];
        }

        if (curSum > maxSum) {
            maxSum = curSum;
            bestL = start;
            bestR = i;
        }
    }

    return {maxSum, {bestL, bestR}};
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>v;
vector<ll>w;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
for(ll i=0;i<n;i++){
ll x;
cin>>x;
w.emplace_back(x);
}
ll i=0;
while(k<=0 && i<n){
    if(i%2==0){
        v[i]+=(k/n+1)*w[i];
        k=k-(k/n+1);
        if(k<=0)break;
    }
    else{
        v[i]-=(k/n+1)*w[i];
        k=k-(k/n+1);
    }
    i++;
}
pair<ll,vector<int>>p=maxSubarrayKadane(v);
cout<<p.first<<endl;

}

return 0;
}