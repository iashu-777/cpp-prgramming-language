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
string x1;
cin>>x1;
ll count=0;
for(ll i=0;i<n;i++){
    if(x1[i]=='1')count++;
}
ll mini=*min_element(v.begin(),v.end());

ll maxi=*max_element(v.begin(),v.end());
string s(n,'0');
for(ll i=1;i<n-1;i++){
    if(v[i]>mini && v[i]<maxi)s[i]='1';
}
ll flag=0;
for(ll i=0;i<n;i++){
    if(x1[i]=='1' && s[i]=='0'){
        flag=1;
    }
}

// ll a=0;
// vector<pair<ll,ll>>ans;
// if(count>5 || x1[0]=='1' || x1[n-1]=='1'){
//     a=-1;;
// }
// else{
//     while(x1.find('1')!=string::npos){
//         ll p=x1.find('1');
//         // cout<<mini<<" "<<maxi<<endl;
//         if(v[p]>mini && v[p]<maxi){
//             x1[p]='0';
//             ans.push_back({mini,maxi});
//         }
//         else{
//             flag=1;
//             break;
//         }
//     }
// }
if(flag==1 || x1[0]=='1' || x1[n-1]=='1')cout<<-1<<endl;
else{
    cout<<1<<endl;
    // for(auto x:ans){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    cout<<1<<" "<<n<<endl;
}
// cout<<endl;


}

return 0;
}