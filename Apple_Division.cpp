// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
//  ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll n;
// cin>>n;
// vector<ll>v;
// for(ll i=0;i<n;i++){
//     ll x;
//     cin>>x;
//     v.push_back(x);
// }
// // sort(v.begin(),v.end());
// ll mini=INT_MAX;
// ll sum1=0;
// for(auto x:v){
//     sum1+=x;
// }
// // cout<<sum1<<endl;
// for(ll i=0;i<n;i++){
//     for(ll j=i;j<n;j++){
//         ll sum=0;
//         for(ll k=i;k<=j;k++){
//             sum+=v[k];
//         }
//         mini=min(mini,abs(sum-(sum1-sum)));
//     }
// }
// cout<<mini;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(vector<ll>& v, int i, ll sum, ll total, ll &ans) {
    // base case
    if (i == v.size()) {
        ans = min(ans, abs(total - 2 * sum));
        return;
    }

    // include current element
    solve(v, i + 1, sum + v[i], total, ans);

    // exclude current element
    solve(v, i + 1, sum, total, ans);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        total += v[i];
    }

    ll ans = LLONG_MAX;
    solve(v, 0, 0, total, ans);
    cout << ans << "\n";

    return 0;
}
