#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll aa=0;
    ll bb=0;
    for(auto x:s){
        if(x=='a')aa++;
        if(x=='b')bb++;
    }
    string s1,s2,s3,s4;
    // s1+=('a'*aa);
    for(ll i=0;i<aa;i++){
        s1+='a';
    }
    // s1+=('b'*bb);
    for(ll i=0;i<bb;i++){
        s1+='b';
    }
    // s2+=('b'*bb);
    for(ll i=0;i<bb;i++){
        s2+='b';
    }
    // s2+=('a'*aa);
    for(ll i=0;i<aa;i++){
        s2+='a';
    }
    if(aa%2==0){
        // s3+=('a'*(aa/2));
        for(ll i=0;i<aa/2;i++){
        s3+='a';
    }
        // s3+=('b'*bb);
        for(ll i=0;i<bb;i++){
        s3+='b';
    }
        // s3+=('a'*(aa/2));
        for(ll i=0;i<aa/2;i++){
        s3+='a';
    }
    }
    if(bb%2==0){
        // s4+=('b'*(aa/2));
        for(ll i=0;i<bb/2;i++){
        s4+='b';
    }
        // s4+=('a'*bb);
        for(ll i=0;i<aa;i++){
        s4+='a';
    }
        // s4+=('b'*(aa/2));
        for(ll i=0;i<bb/2;i++){
        s4+='b';
    }
    }
    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl;
    ll c1=INT_MAX;
    if(s1.empty()!=1){
        c1=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=s1[i]){
                c1++;
            }
        }
    }
    ll c2=INT_MAX;
    if(s2.empty()!=1){
        c2=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=s2[i]){
                c2++;
            }
        }
    }
    ll c3=INT_MAX;
    if(s3.empty()!=1){
        c3=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=s3[i]){
                c3++;
            }
        }
    }
    ll c4=INT_MAX;
    if(s4.empty()!=1){
        c4=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=s4[i]){
                c4++;
            }
        }
    }
    cout<<min({c1/2,c2/2,c3/2,c4/2})<<endl;
}
return 0;
}