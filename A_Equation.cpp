// #include<bits/stdc++.h>
// using namespace std;
// #define int long long
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }





//  main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// vector<bool>v=sieve(10000000);
// unordered_map<ll,ll>mpp;
// ll i=0;

// for(auto x:v){
//     if(x==0){
//         mpp[i]++;
//     }
//     i++;
// }
// ll n;
// cin>>n;
// for(auto x:mpp){
//     if(mpp.find(n+x.first)!=mpp.end()){
//         cout<<x.first<<" "<<n+x.first;
//         break;
//     }
// }


// return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<bool> sieve(ll n) {
    vector<bool> v(n+1,1);
    v[0] = v[1] = 0;
    for (ll i=2; i*i<=n; i++) {
        if (v[i]) {
            for (ll j=i*i; j<=n; j+=i) v[j]=0;
        }
    }
    return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<bool> isPrime = sieve(10000000);
    ll n;
    cin >> n;


    for (ll i = 4; i <= 10000000; i++) {  // 4 se start, kyunki smallest composite 4 hai
        if(n<i){
            if (!isPrime[i] && !isPrime[abs(n+i)]) { // dono composite
            cout << max(abs(n+i),i) << " " << min(abs(n+i),(i)) << "\n";
            return 0;
        }
        }
       else {
        if (!isPrime[i] && !isPrime[n+i]) { // dono composite
            cout << n+i << " " << (i) << "\n";
            return 0;
        }
       }
        
    }

    cout << "Not possible\n";
    return 0;
}
