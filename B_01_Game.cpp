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
//     string s;
//     cin>>s;
//     ll i=0;
//     ll n=s.size();
//     ll j=n-1;
//     ll count=0;
//     while( i<j){
//         if((s[i]=='0'&& s[j]=='1')||(s[i]=='1'&&s[j]=='0')){
//             count++;
//             i++;
//             j--;
//         }
//         else{
//             if(s[j]==s[j-1]){
//                 j--;
//             }
//             else if(s[i]==s[i+1]){
//                 i++;
//             }
//         }
//     }
//     if(count&1){
//         cout<<"DA";
//     }
//     else{
//         cout<<"NET";
//     }
//     cout<<"\n";
 
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
        string s;
        cin >> s;
        ll i = 0;
        ll n = s.size();
        ll j = n - 1;
        ll count = 0;
        while (i < j) {
            if ((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')) {
                count++;
                i+=2;}
            else if((s[j] == '0' && s[j-1] == '1') || (s[j] == '1' && s[j-1] == '0')){
count++;
j-=2;
            }
            else if((s[i]=='0' && s[j]=='1')||(s[j]=='0'&&s[i]=='1')){
                count++;
                i++;
                j--;
            }
            else {
                if (j - 1 > i && s[j] == s[j - 1]) { 
                    j--;
                } else if (i + 1 < j && s[i] == s[i + 1]) { 
                    i++;
                } else { 
                    i++;  // Safe movement to avoid infinite loop
                    // j--;
                }
            }
        }
        if (count & 1) {
            cout << "DA";
        } else {
            cout << "NET";
        }
        cout << "\n";
    }
    return 0;
}
