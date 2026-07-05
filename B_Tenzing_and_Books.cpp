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



bool checkKthBit(ll n, ll k) {
    
    n = n >> k;
    
    if ((n & 1) != 0) {
        return true;
    }
    
    return false;
}


bool CanRead(ll a,ll x){
    ll p=(ll)ceil(log2(a+1));
    ll q=(ll)ceil(log2(x+1));

    if(p>q)return false;
    for(ll i=1;i<=p;i++){
        if(checkKthBit(x,i-1)==0 && checkKthBit(a,i-1)==1){
            return false;
        }
    }
    return true;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll t;
cin>>t;
while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll>st1;
    vector<ll>st2;
    vector<ll>st3;
    for(ll i=0;i<n;i++){
        ll c;
        cin>>c;
        st1.push_back(c);
    }
    for(ll i=0;i<n;i++){
        ll c;
        cin>>c;
        st2.push_back(c);
    }
    for(ll i=0;i<n;i++){
        ll c;
        cin>>c;
        st3.push_back(c);
    }

    ll i=0,j=0,k=0;
    ll kn=0;
    while(i<n || j<n || k<n){
        if(i<n && CanRead(st1[i],x)){
            kn=kn|st1[i];
            i++;
        }
        else{
            i=n;
        }
        if(j<n && CanRead(st2[j],x)){
            kn=kn|st2[j];
            j++;
        }
        else{
            j=n;
        }
        if(k<n && CanRead(st3[k],x)){
            kn=kn|st3[k];
            k++;
        }
        else{
            k=n;
        }
    }

    if(kn==x){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
cout<<endl;
}

return 0;
}