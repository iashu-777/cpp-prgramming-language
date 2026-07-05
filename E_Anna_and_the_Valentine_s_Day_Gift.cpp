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
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll count=0;
    ll flag=0;
    vector<ll>cw;
    for(ll i=0;i<n;i++){
        count+=(log10(abs(v[i]))) + 1;
        if(v[i]%10==0){
            ll c=0;
            ll num=v[i];
            while(num%10==0){
                num=num/10;
                c++;
            }
            if(c!=0)
            cw.push_back(c);
            // flag=max(flag,c); //maximum zeroes wala number ke zeroes
        }
    }
    priority_queue<ll>pq(cw.begin(),cw.end());
    
    ll finalnum=count;
    // if(pq.size()>0){

    //     count-=(pq.top());
    //     pq.pop();
    // }
        while(!pq.empty()){
        count-=pq.top();
        pq.pop();
        if(pq.size()==1)break;
        if(pq.size()>1){
            ll a=pq.top();
            pq.pop();
            ll b=pq.top();
            pq.pop();
            pq.push(min(a,b));
        }
    }
    // sort(cw.begin(),cw.end());// find last two numbers if present to remove that zeroes 
    // if(cw.size()>0){
    //     finalnum=count-cw[cw.size()-1];
    //     if(cw.size()>2){
    //         finalnum=finalnum-min(cw[cw.size()-2],cw[cw.size()-3]);
    //     }
    // }
    // ll b=cw.size();
    // for(ll i=3;i<b;i+=2){
    //     finalnum=finalnum-(cw[b-i]);
    // }
    // for(ll i=0;i<(cw.size()+1)/2;i++){
    //     count-=(cw[cw.size()-i-1]);
    // }
finalnum=count;
    if(finalnum>=m+1){
        cout<<"Sasha";
    }
    else
    cout<<"Anna";
    cout<<endl;

}
return 0;
}