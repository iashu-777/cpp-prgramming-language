#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}


long long solve(deque<long long>& a) {
    ll n=a.size();
    ll x=0;
    while(a.size()!=1){
        ll f=a.front();
        if(a.size()!=0)
        a.pop_front();
        ll s=a.front();
        if(f>=0 && s>=0){
            x+=f;
        }
        else if(f<0 && s>0){
            if(abs(f)>s){
                x-=s;
                if(a.size()!=0)

            a.pop_front();
            a.push_front(f);
            }
            else{
                x-=f;
            }
        }
       else if(f>abs(s) ){
            x+=f;

        }
        else{
            x+=(-1*s);
            if(a.size()!=0)

            a.pop_front();
            a.push_front(f);
        }

    }
    return x;
}



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
deque<ll>a;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
a.push_back(x);
}
cout<<solve(a)<<endl;


}

return 0;
}