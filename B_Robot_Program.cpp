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
//     ll n,x,k;
//     cin>>n>>x>>k;
//     string s;
//     cin>>s;
//     s=s+s;
//     ll count=n*2;
//     unordered_set<ll>st;
//     ll ch=k;
//     for(ll i=0;count--&&ch--;i++){
//         if(i<s.size()&&s[i]=='L'){
//             x--;
//         }
//         else if(i<s.size()&&s[i]=='R'){
//             x++;
//         }
//         if(x==0){
//             st.insert(i);
//             i=-1;
//         }
//     }
//     ll ans=0;
//     if(st.size()==0){
//         ans=0;
//         // cout<<"Hi";
//     }
//     else if(st.size()==1){
//         ans=1;
//         // cout<<"Hii";
//     }
//     else {
//         ans=(k+2-1)/2;
//         // cout<<"hell";
//     }
//     cout<<ans<<"\n";
// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x, k;
        cin >> n >> x >> k;
        string s;
        cin >> s;

        ll count = 2 * n;
        unordered_set<ll> st;
        ll ch = k;
        
        ll i = 0;
        while (count-- && ch--) {
            if (i >= s.size()) i = 0;  // Reset `i` after reaching the end
            if (s[i] == 'L') {
                x--;
            } else if (s[i] == 'R') {
                x++;
            }
            if (x == 0) {
                st.insert(i);
            }
            i++;
        }

        ll ans = 0;
        if (st.empty()) {
            ans = 0;
        } else if (st.size() == 1) {
            ans = 1;
        } else {
            ans = (k +2- 1) / 2;  // Adjusted calculation
        }
        cout << ans << "\n";
    }
    return 0;
}
