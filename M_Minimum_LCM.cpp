#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

vector<bool> isPrime;  // Global sieve array

void sieve(ll n) {
    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

    for (ll i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
bool checkPrime(ll num) {
    if (num < 0) return false;  // Negative numbers are not prime
    return isPrime[num];
}
bool isPrimee(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
void solve(ll x){
    // if(isPrimee(x)){
    //     cout<<1<<" "<<x-1;
    // }
    // else{
        for(ll i=(x/2);i>=1;i=i/2){
            if(x%i==0){ 
                cout<<i<<" "<<x-i;
                break;
            }
        }
    }


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
// ll n = 10000000;  // Set an upper limit for prime checking
//     sieve(n);  // Precompute prime numbers
ll t;
cin>>t;
while(t--){
    ll x;
    cin>>x;
   solve(x);
    cout<<endl;
}
return 0;
}