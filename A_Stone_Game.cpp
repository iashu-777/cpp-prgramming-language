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
    for(ll tt=1;tt<=t;tt++){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    v.emplace_back(x);
    }
    //  if(t==100 && tt==51){
        
    //     for(auto x:v){
    //         cout<<x<<",";
    //     }
    // }
    
    ll mini=INT_MAX;
    ll maxi=INT_MIN;
    ll gidx=-1;
    for(ll i=0;i<n;i++){
        if(v[i]>maxi){
            maxi=v[i];
            gidx=i;
        }
    }
    ll lidx=-1;
    for(ll i=0;i<n;i++){
        if(v[i]<mini){
            mini=v[i];
            lidx=i;
        }
    }
    
    if(gidx<=(n/2) && lidx<=(n/2)){
        cout<<max(gidx,lidx)+1<<endl;
    }
    else if(gidx>=(n/2) && lidx>=(n/2)){
        cout<<max(n-gidx,n-lidx)<<endl;
    }
    else {
        if(gidx>n/2){
            gidx=n-gidx;
        }
        else if(gidx<=n/2){
            gidx++;
        }
        if(lidx>n/2){
            lidx=n-lidx;
        }
        else if(lidx<=n/2){
            lidx++;
        }
        
        cout<<lidx+gidx<<endl;
       
    //       ll fromLeft = max(gidx, lidx) + 1;                 // both from left
    // ll fromRight = max(n - gidx, n - lidx);            // both from right
    // ll fromBoth = min(gidx + 1 + (n - lidx), lidx + 1 + (n - gidx)); // one left, one right

    // cout << min({fromLeft, fromRight, fromBoth}) << endl;
    
    }
    }

    return 0;
    }