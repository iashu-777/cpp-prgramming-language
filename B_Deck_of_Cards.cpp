// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
//  ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
// long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }





// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,k;
//     cin>>n>>k;
//     list<ll>lt;
//     for(ll i=1;i<=n;i++){
//         lt.push_back(i);
//     }
//     string s;
//     cin>>s;
//     if(k==n){
//         while(k--)
//         cout<<'-';
//     }
//     else{
// unordered_map<ll,ll>mpp3;
//         ll count=0;
//         for(ll i=0;i<k;i++){
//             if(s[i]=='0'){
//                 mpp3[*lt.begin()]++;
//                 lt.pop_front();
                
//             }
//             else if(s[i]=='1'){
//                 lt.pop_back();
//                 mpp3[*lt.rbegin()]++;

//             }
//             else{
//                 count++;
//             }
//         }
//         unordered_map<ll,ll>mpp;
//         for(ll i=0;i<count;i++){
//             if(lt.empty()!=1){
                
//                 mpp[*lt.begin()]++;
//                 lt.pop_back();
//             }
//             if(lt.empty()!=1){
//                 mpp[*lt.rbegin()]++;
//                 lt.pop_front();
//             }
//         }
//         unordered_map<ll,ll>mpp2;
//         while(lt.empty()!=1){
//             mpp2[*lt.begin()]++;
//             lt.pop_front();
//         }
//         for(ll i=1;i<=n;i++){
//         if(mpp3.find(i)!=mpp3.end()){
//             cout<<'-';
//         }
//         else if(mpp2.find(i)!=mpp.end()){
//             cout<<'+';
//         }
//         else if(mpp.find(i)!=mpp.end()){
//             cout<<'?';
//         }
//         else{
//             cout<<'+';
//         }
//     }
//     }
//     cout<<endl;

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
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    list<ll>lt;
    for(ll i=1;i<=n;i++){
        lt.push_back(i);
    }
    string s;
    cin>>s;
    if(n==k){
        for(ll i=0;i<n;i++){
            cout<<'-';
        }
    }
    else{

        ll count=0;
        unordered_map<ll,ll>mpp1;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'){
                mpp1[*lt.begin()]++;
            lt.pop_front();
        }
        else if(s[i]=='1'){
            mpp1[*lt.rbegin()]++;
            
            lt.pop_back();
        }
        else{
            count++;
        }
    }
    unordered_map<ll,ll>mpp2;
    for(ll i=0;i<count;i++){
        mpp2[*lt.begin()]++;
        mpp2[*lt.rbegin()]++;
        if(lt.empty()!=1)
        lt.pop_back();
        if(lt.empty()!=1)
        
        lt.pop_front();
    }
    
    
    
    for(ll i=1;i<=n;i++){
        if(mpp1.find(i)!=mpp1.end())cout<<'-';
        else if(mpp2.find(i)!=mpp2.end())cout<<'?';
        else cout<<'+';
        }
        
    }
    cout<<endl;

}
return 0;
}