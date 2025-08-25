    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define mod 998244353
    #define loop(a,b,c) for(ll i=a;i<b;i+=c)
    ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
    ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
    ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
    vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }





    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.emplace_back(x);
    }
    ll maxi=INT_MIN;
    for(ll i=0;i<n-1;i++){
        maxi=max(maxi,v[i]*v[i+1]);
    }
    cout<<maxi<<endl;
    }

    return 0;
    }