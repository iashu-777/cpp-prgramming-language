// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// ll sum_of_digits(ll n){ ll b=0; for(;n;n/=10) b+=n%10; return b; }




// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,k,b,b;
//     cin>>n>>k>>b>>b;
//     ll smax=((b+1)*k)-1;
//     ll ans=0;
//     if(b>((k*b)+(n*(k-1))) || (b<(k*b))){
//         cout<<-1;
//     }
//     else{
//         if(b<=(smax)){
//             cout<<b<<" ";
//             for(ll i=0;i<n-1;i++){
//                 cout<<0<<" ";
//             }
//         }
//         else{
//             cout<<smax<<" ";
//             if((b-smax)%(k-1)!=0){
//                 for(ll i=0;i<(b-smax)/(k-1);i++){
//                     cout<<k-1<<" ";
//                 }
//                 cout<<(b-smax)%(k-1)<<" ";
//                 ll leftzero=n-((b-smax)/(k-1)+1);
//                 while(leftzero>1){
//                     cout<<0<<" ";
//                     leftzero--;
//                 }
//             }
//             else{
//                 for(ll i=0;i<(b-smax)/(k-1);i++){
//                     cout<<k-1<<" ";
//                 }
//                 ll leftzero=n-((b-smax)/(k-1));
//                 while(leftzero>0){
//                     cout<<0<<" ";
//                     leftzero--;
//                 }
//             }
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }


    #include <iostream>
    #include <vector>
    #include <cmath>
     
    using namespace std;
    #define int long long
     
    signed main() {
        if (1) {
            ios_base::sync_with_stdio(false);
            cin.tie(nullptr);
            cout.tie(nullptr);
        }
        int t;
        cin >> t;
        while (t--) {
            int n, k, b, s;
            cin >> n >> k >> b >> s;
            vector <int> a(n);
            a[0] = k * b;
            s -= k * b;
            if (s < 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) {
                    int now = min(k - 1, s);
                    a[i] += now;
                    s -= now;
                }
                if (s > 0) cout << "-1\n";
                else {
                    for (int i = 0; i < n; ++i) cout << a[i] << " ";
                    cout << "\n";
                }
            }
        }
    }