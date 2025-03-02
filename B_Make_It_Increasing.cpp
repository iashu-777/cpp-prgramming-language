#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>v;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll count=0;
    if(v[n-1]<n-1){
        count=-1;
    }
    else{
        for(ll i=n-1;i>0;i--){
            // while(v[i]<=v[i-1]){
            //     // v[i-1]=v[i-1]/2;
            //     v[i-1]>>=1;
                if(v[i-1]<i-1){
                    count=-1;
                    break;
                }
            //     count++;
            // }
            if (v[i]>0 &&v[i-1]>0 && v[i] <= v[i-1]) {
                ll k = (log2(v[i-1]/v[i])) + 1;  // O(1) computation
                // int k = ceil(log2((double)v[0] / v[1])); // Compute shifts in O(1)        int k = ceil(log2((double)v[0] / v[1])); // Compute shifts in O(1)
                v[i-1] >>= k;  // Equivalent to v[0] = v[0] / 2^k
                if(v[i-1]<i-1){
                    count=-1;
                    break;
                }
                count += k;
            }
        
        }
    }
    cout<<count<<"\n";
 
}
return 0;
}