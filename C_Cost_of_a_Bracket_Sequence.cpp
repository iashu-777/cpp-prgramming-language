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
    stack<pair<char,ll>>st;
    map<ll,ll>mpp;
    //find longest balanced subsequence
    for(ll i=0;i<n;i++){
        if(st.size()!=0 && st.top().first=='(' && s[i]==')'){
            st.pop();
        }
        else{
            st.push({s[i],i});
        }
    }
    //mark pos in map which we dont give advantage
    while(st.size()!=0){
        mpp[st.top().second]++;
        st.pop();
    }
    //loop k character
    string ans(n,'0');
    for(ll i=0;i<n;i++){
        if(k!=0 && mpp.find(i)==mpp.end() && s[i]=='('){
            ans[i]='1';
            k--;
        }
    }
    for(auto x:ans){
        cout<<x;
    }
    cout<<endl;

}
return 0;
}