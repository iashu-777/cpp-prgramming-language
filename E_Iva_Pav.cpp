#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }
bool checkKthBit(ll n, ll k) { ll val = (1LL << k); if ((n & val) != 0) { return true; } return false;}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    map<ll, map<ll, ll>> mat;
    for(ll i=0;i<64;i++){
        for(ll j=1;j<=n;){
            bool c=checkKthBit(v[j],i);
            if(c==true){
                ll k=j;
                mat[j][k]=mat[j][k]+(1LL<<i);
                while(k<n && checkKthBit(v[k+1],i)==true){
                    k++;                    
                    mat[j][k]=mat[j][k]+(1LL<<i);
                    mat[k][k]=mat[k][k]+(1LL<<i);
                }
                j=k+1;
            }
            else{
                j++;
            }
        }
    }
// ll n;
// cin >> n;

// vector<ll> v(n + 1);
// for (ll i = 1; i <= n; i++) {
//     cin >> v[i];
// }

// map<ll, map<ll, ll>> mat;

// for (ll i = 0; i < 64; i++) {
//     for (ll j = 1; j <= n;) {
//         if (checkKthBit(v[j], i)) {
//             ll k = j;
//             while (k < n && checkKthBit(v[k + 1], i)) {
//                 k++;
//             }

//             mat[j][k] += (1LL << i);

//             j = k + 1;
//         } else {
//             j++;
//         }
//     }
// }
    // for(ll i=1;i<=n;i++){
    //     for(ll j=1;j<=n;j++){
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
//     for (auto x : mat) {
//     for (auto y : x.second) {
//         cout << x.first << " " << y.first << " " << y.second << "\n";
//     }
// }
    ll q;
    cin>>q;

    for(ll i=0;i<q;i++){
        ll l,k;
        cin>>l>>k;
        ll low=l;
        ll high=n;
        ll ans=0;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(mat[low][mid]>=k){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        if(ans==0)cout<<-1<<" ";
        else cout<<ans<<" ";    
    }
    cout<<endl;
}
return 0;
}