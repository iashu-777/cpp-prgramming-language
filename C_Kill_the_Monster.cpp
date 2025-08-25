#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll ch,cd;
    cin>>ch>>cd;
    ll mh,md;
    cin>>mh>>md;
    ll k,w,a;
    cin>>k>>w>>a;
    if(cd>=mh){
        cout<<"YES";
    }
    else{
        // if(ch<md){
        //     ch+=(k*a);
        // }
        // else if(cd<mh){
        //     cd+=(k*w);
        // }
        // if(((ch+md-1)/md)>=((mh+cd-1)/cd)){
        //     cout<<"YES";
        // }
        // else{
        //     cout<<"NO";
        // }
        ll flag=0;
        ll pch=ch;
        ll pcd=cd;
        for(ll i=0;i<=k;i++){
            ch+=(i*a);
            cd+=((k-i)*w);
            if(((ch+md-1)/md)>=((mh+cd-1)/cd) || cd>=mh){
        cout<<"YES";
        flag=1;
        break;
    }
    else{
        ch=pch;
        cd=pcd;
    }
        }
        if(flag==0){
            cout<<"NO";
        }
    }
    cout<<endl;
}    
return 0;
}