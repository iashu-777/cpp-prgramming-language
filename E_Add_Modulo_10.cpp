// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
//  ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }   
//   ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
// ll n;
// cin>>n;
// vector<ll>v;
// for(ll i=0;i<n;i++){
// ll x;
// cin>>x;
// v.emplace_back(x);
// }
// ll c=*min_element(v.begin(),v.end());
// unordered_map<ll,ll>mpp;
// while(c<=1000000000LL){
//     mpp[c]++;
//     if(c%10==0)break;
//     c=c+(c%10);
// }
// ll flag=0;
// for(auto x:v){
//     if(!(mpp.find(x)!=mpp.end() || mpp.find(x+(x%10))!=mpp.end())){
//         flag=1;
//         break;
//     }
// }
// flag==1?cout<<"No":cout<<"Yes";
// cout<<endl;
// }

// return 0;
// }


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
 ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }   
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
ll n;
cin>>n;
vector<ll>v;
for(ll i=0;i<n;i++){
ll x;
cin>>x;
v.emplace_back(x);
}
unordered_map<ll,ll>mpp1;
unordered_map<ll,ll>mpp2;
for(ll i=1;i<=100;){
    mpp1[i]++;
    i=i+(i%10);
}
for(ll i=3;i<=100;){
    mpp2[i]++;
    i=i+(i%10);
}

ll count1=0;
ll count2=0;
ll count3=0;

for(ll i=0;i<n;i++){

    if(mpp1.find(v[i]%100)!=mpp1.end() || mpp1.find((v[i]+(v[i]%10))%100)!=mpp1.end()){
        count1++;
    }
    else if(mpp2.find(v[i]%100)!=mpp2.end() || mpp2.find((v[i]+(v[i]%10))%100)!=mpp2.end()){
        count2++;
    }
    else if(v[i]%5==0){
        count3++;
    }

}
if(count1==0 && count2==0 && count3!=0){
    unordered_map<ll,ll>mpp3; //three number diff
    for(auto x:v){
        
        mpp3[x+(x%10)]++;
    }
    if(mpp3.size()<=1)
    cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
else if(count1==0 && count2!=0 && count3==0){
    cout<<"Yes"<<endl;
}
else if(count1!=0 && count2==0 && count3==0){
    cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
}

return 0;
}