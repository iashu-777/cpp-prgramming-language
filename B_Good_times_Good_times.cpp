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
bool checkKthBit(int n, int k) { int val = (1 << k); if ((n & val) != 0) { return true; } return false;}


// bool good(ll n){
//     string s=to_string(n);
//     unordered_map<char,ll>mpp;
//     for(auto x:s){
//         mpp[x]++;
//     }
//     if(mpp.size()<=2)return true;
//     else return false;
// }


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

// vector<ll>v((ll)1e8+1,0);
// for(ll j=1;j<=v.size();j++){
// for(ll i=2;i<=(ll)1e8;i++){
//         if(good(j*i) && good(i)){
//             v[j]=i;
//             break;
//         }
//     }
// }

ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s=to_string(n);
    string temp(s.size()-1,'0');
    cout<<1<<temp<<1<<endl;

}
return 0;
}