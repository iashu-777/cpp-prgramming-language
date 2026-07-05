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


int uniqueChars(int l,int r,vector<vector<int>>& pref){
    int ans=0;
    for(int c=0;c<26;c++)
        if(pref[r+1][c]-pref[l][c] > 0) ans++;
    return ans;
}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    ll n=s.size();
    unordered_map<ll,vector<ll>>mpp;
    vector<vector<int>> pref(n+1,vector<int>(26,0));


    for(int i=0;i<n;i++){
        mpp[s[i]].push_back(i);

        pref[i+1]=pref[i];
        pref[i+1][s[i]-'a']++;
    }
    
    ll total=mpp.size();
    ll flag=0;
    for(auto x:mpp){
        for(ll i=0;i<x.second.size()-1;i++){
            ll a=x.second[i];
            ll b=x.second[i+1];
          ll ele= uniqueChars(a,b,pref);
          if(ele<total)flag=1;
        }
    }
    if(flag==1)cout<<"NO";
    else cout<<"YES";
    cout<<endl;
    
}
return 0;
}