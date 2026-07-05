// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
//  ll findIndex(const vector<ll>& v, ll key, ll i, ll j){ auto it=lower_bound(v.begin()+i,v.begin()+j+1,key); return (it!=v.begin()+j+1 && *it==key)? it-v.begin():-1; }
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
//   ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--)
// {
//     ll n;
//     cin>>n;
//     vector<vector<ll>>v(n+1,vector<ll>(n+1,0));
//     vector<vector<ll>>vis(n+1,vector<ll>(n+1,0));
//     for(ll i=1;i<=n;i++)
//     {
//         for(ll j=1;j<=n;j++){
//             char x;
//             cin>>x;
//             v[i][j]=x-'0';
//         }
//     }
//     ll count=0;
//     for(ll i=1;i<=n;i++)
//     {
//         for(ll j=1;j<=n;j++){
//             if(i!=j && vis[i][j]==0){
//                 ll k=v[i][j]+v[j][i]+v[n-i+1][j]+v[j][n-i+1];
//                 if(k==1 || k==3)count++;
//                 else if(k==2)count+=2;
//                 vis[i][j]=1;
//                 vis[j][i]=1;
//                 vis[n-i+1][j]=1;
//                 vis[j][n-i+1]=1;
//             }
//             else if(i==j && vis[i][j]==0){
//                 ll k=v[i][j]+v[n-i+1][n-j+1]+v[n-i+1][j]+v[j][n-i+1];
//                 if(k==1 || k==3)count++;
//                 else if(k==2)count+=2;
//                 vis[i][j]=1;
//                 vis[n-i+1][n-j+1]=1;
//                 vis[n-i+1][j]=1;
//                 vis[j][n-i+1]=1;
//             }
//         }
//     }
//     cout<<count<<endl;
    
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
while(t--)
{
    ll n;
    cin>>n;
    vector<vector<ll>>v(n+1,vector<ll>(n+1,0));
    vector<vector<ll>>vis(n+1,vector<ll>(n+1,0));
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++){
            char x;
            cin>>x;
            v[i][j]=x-'0';
        }
    }
    ll count=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=n;j++){
            if(vis[i][j]==0){
                ll k=v[i][j]+v[j][n+1-i]+v[n+1-i][n+1-j]+v[n+1-j][i];
                if(k==1 || k==3)count++;
                else if(k==2)count+=2;
                vis[i][j]=1;
                vis[j][n+1-i]=1;
                vis[n+1-i][n+1-j]=1;
                vis[n+1-j][i]=1;
            }
            
        }
    }
    cout<<count<<endl;
    
}
return 0;
}