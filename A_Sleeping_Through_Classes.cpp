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
ll n,k;
cin>>n>>k;
string s;
cin>>s;
ll count=0;
// for(ll i=0;i<n;){
    
//     // i--;
//     // if(i>n)break;
//     if( i<n && s[i]=='1'){
//         while(i<n && s[i]=='1'){
//         i++;
//     }
//         ll c=k;
//         while(c-- && i<n ){
//             i++;
//         }
        
//     }
//     else{
//         count++;
//         i++;
//     }
// }

ll i=0;
ll c=k;
k=0;
while(i<n){
    // while(i<n-1 && s[i]==s[i+1] && s[i]=='1'){
    //     i++;
    // }
    // if(s[i]=='0'){
    //     count++;
    //     i++;
    // }
    // else{
    //     i=i+k+1;
    // }
    if(s[i]=='1'){
        k=c;
    }
    else {
        if(k==0){
            count++;
        }
        else{
            k--;
        }
    }
    i++;
}

cout<<count<<endl;

}

return 0;
}