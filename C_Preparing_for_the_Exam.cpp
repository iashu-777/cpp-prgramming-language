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
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>vm;
    vector<ll>vk;
    for(ll i=0;i<m;i++){
        ll x;
        cin>>x;
        vm.push_back(x);
    }
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        vk.push_back(x);
    }
    ll flag=0;
    if(k<n-1){
        flag=1;
        string ans1(m,'0');
        cout<<ans1<<endl;
    }
    else if(m==1 && k==1){
        cout<<'0'<<endl;
    }
    else{
        if(vm==vk || m<k){
            string ans(m,'1');
            cout<<ans<<endl;
        }
        // else{
        //     ll sumi=accumulate(vk.begin(),vk.end(),0);
        //     ll ak=(n*(n+1))/2;
        //     string ans2(m,'0');
        //     ans2[ak-sumi-1]='1';
        //     cout<<ans2<<endl;
        // }
        else {
    long long sumi = accumulate(vk.begin(), vk.end(), 0LL);
    long long ak = (n * (n + 1)) / 2;
    string ans2(m, '0');
    long long idx = ak - sumi;
   auto it= find(vm.begin(),vm.end(),idx);


    if (it!=vm.end()) {
        ans2[distance(vm.begin(),it)] = '1';
    }
    cout << ans2 << endl;
}

    }

}
return 0;
}