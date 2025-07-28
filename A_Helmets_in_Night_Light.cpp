// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


// bool comp(pair<ll,ll>a,pair<ll,ll>b){
//     if(a.second==b.second){
//         return a.first>b.first;
//     }
//     return a.second<b.second;
// }
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,p;
//     cin>>n>>p;
//     vector<ll>a;
//     vector<ll>b;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         a.push_back(x);
//     }
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         b.push_back(x);
//     }
//     vector<pair<ll,ll>>v;
//     for(ll i=0;i<n;i++){
//         v.push_back({a[i],b[i]});
//     }
//     sort(v.begin(),v.end(),comp);
    
//     ll sum=p;
//     ll k=n;
//     ll m=0;
//     --k;
//     while(k>=0){
        
//         if(k<v[m].first){
//             sum+=(k*v[m].second);
//         }
//         else
//         sum+=(v[m].first*v[m].second);
//         k=k-v[m].first;
//         m++;
//     }
//     cout<<sum<<endl;
// }
// return 0;
// }























// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


// bool comp(pair<ll,ll>a,pair<ll,ll>b){
//     if(a.second==b.second){
//         return a.first>b.first;
//     }
//     return a.second<b.second;
// }
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,p;
//     cin>>n>>p;
//     vector<ll>a;
//     vector<ll>b;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         a.push_back(x);
//     }
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         b.push_back(x);
//     }
//     vector<pair<ll,ll>>v;
//     for(ll i=0;i<n;i++){
//         v.push_back({a[i],b[i]});
//     }
//     sort(v.begin(),v.end(),comp);
    
//     ll sum=0;
//     ll k=n;
//     ll m=0;
//     ll flag=0;
//     while(k>0){
//         if(v[m].second>=p){
//             flag=1;
//             break;
//         }
//         if(k<=v[m].first){
//             sum+=(k*v[m].second);
//         }
//         else
//         sum+=(v[m].first*v[m].second);
//         k=k-v[m].first;
//         m++;
//     }
//     if(k>0)
//     sum+=(k*p);
//     cout<<sum<<endl;
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


bool comp(pair<ll,ll>a,pair<ll,ll>b){
    if(a.second==b.second){
        return a.first>b.first;
    }
    return a.second<b.second;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,p;
    cin>>n>>p;
    vector<ll>a;
    vector<ll>b;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        b.push_back(x);
    }
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        v.push_back({a[i],b[i]});
    }
    sort(v.begin(),v.end(),comp);
    
    ll sum=p;
    ll k=n-1;
    ll m=0;
    ll flag=0;
    while(k>0){
        if(v[m].second>=p){
            flag=1;
            break;
        }
        if(k<=v[m].first){
            sum+=(k*v[m].second);
        }
        else
        sum+=(v[m].first*v[m].second);
        k=k-v[m].first;
        m++;
    }
    if(k>0)
    sum+=(k*p);
    cout<<sum<<endl;
}
return 0;
}