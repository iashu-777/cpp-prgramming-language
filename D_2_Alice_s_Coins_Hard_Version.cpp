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

const int MOD =1e9+7;


ll  power(ll base,ll exp){
    ll res=1;
    base%=MOD;
    while(exp>0){
        if(exp%2==1)res=(res*base)%MOD;
        base=(base*base)%MOD;
        exp/=2;
    }
    return res;
}
ll modInverse(ll n){
    return power(n,MOD-2);
}

vector<vector<ll>>multiply(const vector<vector<ll>>&A,const vector<vector<ll>>&B){
   ll K=A.size();
    vector<vector<ll>>C(K,vector<ll>(K,0));

    for(ll i=0;i<K;i++){
        for(ll j=0;j<K;j++){
            for(ll k=0;k<K;k++){
                C[i][j]=(C[i][j]+A[i][k]*B[k][j])%MOD;
            }
        }
    }    
    return C;
}

vector<vector<ll>>matrixPower(vector<vector<ll>>A,ll p){
    ll K=A.size();
    vector<vector<ll>>res(K,vector<ll>(K,0));
    for(ll i=0;i<K;i++){
        res[i][i]=1;
    }
    while(p>0){
        if(p%2==1){
            res=multiply(res,A);
        }
        A=multiply(A,A);
        p/=2;
    }
    return res;
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll a,b,k,n;
if(!(cin>>a>>b>>k>>n))return 0;

ll inv_b=modInverse(b);
ll pH=(a*inv_b)%MOD;
ll pT=((b-a+MOD)%MOD*inv_b)%MOD;



vector<vector<ll>>M(k,vector<ll>(k,0));

for(ll j=0;j<k;j++){
    M[0][j]=pT;
}

for(ll i=1;i<k;i++){
    M[i][i-1]=pH;
}

M=matrixPower(M,n);
ll ans=0;
// ll ans=(M[0][0]+M[1][0])%MOD;

for(ll i=0;i<k;i++){
    ans=(ans+M[i][0])%MOD;
}
cout<<ans<<endl;
return 0;
}