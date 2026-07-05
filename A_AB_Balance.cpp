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


ll countab(string a){
    ll count=0;
    for(ll i=0;i<a.size()-1;i++){
        if(a[i]=='a' && a[i+1]=='b'){
            count++;
        }
    }
    return count;
}
ll countba(string a){
    ll count=0;
    for(ll i=0;i<a.size()-1;i++){
        if(a[i]=='b' && a[i+1]=='a'){
            count++;
        }
    }
    return count;
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

    string t=s;
    if(countab(t)==countba(t)){
        cout<<t<<endl;
        continue;
    }
    if(s.find('a')!=string::npos)
    t.replace(s.find('a'),1,"b");
    if(countab(t)==countba(t)){
        cout<<t<<endl;
        continue;
    }
    t=s;
    if(s.find('b')!=string::npos)

    t.replace(s.find('b'),1,"a");
    if(countab(t)==countba(t)){
        cout<<t<<endl;
    }
}
return 0;
}