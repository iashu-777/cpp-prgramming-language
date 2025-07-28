// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n;
//     cin>>n;
//     vector<ll>p;
//     vector<ll>q;
//     vector<ll>max1;
//     vector<ll>max2;
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         p.push_back(x);
//     }
//     for(ll i=0;i<n;i++){
//         ll x;
//         cin>>x;
//         q.push_back(x);
//     }
//     max1.push_back(p[0]);
//     max2.push_back(q[0]);
//     vector<ll>r;
//     r.push_back((ll)pow(2,p[0])+(ll)pow(2,q[0]));
//     ll maxi=p[0];
//     for(ll i=1;i<n;i++){
//         maxi=max(maxi,p[i]);
//         max1.push_back(maxi);
//     }
//     maxi=q[0];
//     for(ll i=1;i<n;i++){
//         maxi=max(maxi,q[i]);
//         max2.push_back(maxi);
//     }
//     for(ll i=1;i<n;i++){
//         ll k=0;
        
//      k=((ll)pow(2,max1[i])+(ll)pow(2,max2[i]));
     

        
//         r.push_back(k);
//     }

//     for(auto x:r){
//         cout<<x<<" ";
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
     
     
     
    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<ll, ll>power_map;
    for(ll o=0;o<=100000;o++){
        power_map[o]=(ll)pow(2,o)%mod;
    }
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>p;
        vector<ll>q;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            p.push_back(x);
        }
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            q.push_back(x);
        }
        // for (ll x : p) power_map[x] = (ll)pow(2, x) % mod;
        // for (ll x : q) power_map[x] = (ll)pow(2, x) % mod;

        vector<ll>r;
        r.push_back((ll)pow(2,p[0])+(ll)pow(2,q[0]));
        for(ll i=1;i<n;i++){
            ll k=0;
            ll maxi=0;
            for(ll j=0;j<=i;j++){
        //  k=((ll)pow(2,p[j])+(ll)pow(2,q[i-j]));
        ll k = (power_map[p[j]] + power_map[q[i - j]]) % mod;
        //  k=k%998244353;
         maxi=max(maxi,k);
     
            }
            r.push_back(maxi);
        }
        for(auto x:r){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
    }