#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }




int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while (t--)
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }   
    ll ans=0;
    for(ll i=1;i<n-1;i++){
        if(v[i]==v[i+1] && v[i]==v[i-1]){
            continue;
        }
        else{
            if(v[i-1]==v[i]){
                ans=i+1;
            }
            else if(v[i]==v[i+1]){
                ans=i-1;
            }
            else if(v[i-1]==v[i+1]){
                ans=i;
            }
            break;
        }
    } 
    cout<<ans+1<<endl;
    
}

return 0;
}