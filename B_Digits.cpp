// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 998244353
// #define loop(a,b,c) for(ll i=a;i<b;i+=c)

// //calculation of factorial recursively
// ll fact(ll n){
//     if(n==0) return 1;
//     return (n*fact(n-1));
// }


// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// ll t;
// cin>>t;
// while(t--){
//     ll n,d;
//     cin>>n>>d;
//     ll k=fact(n);
//     vector<ll>ans;
//     ans.push_back(1);
//     if(d==5)ans.push_back(5);
//     if(n==2){
//         if(d==3 || d==6){
//             ans.push_back(3);
//         }
//         else if(d==9){
//             ans.push_back(3);
//             ans.push_back(9);
//         }
//         else if(d==7){
//             ans.push_back(7);
//         }
//     }
//     else if(n==3){
//         ans.push_back(3);
//         if(d==3 || d==6 || d==9){
//             ans.push_back(9);
//         }
//         if(d==7 ||d==9 || d==1){
//             ans.push_back(7);
//         }
//     }else{
//     if(n<=6 && n>3){
//         ans.push_back(3);
//         ans.push_back(9);
//         if(d==7)ans.push_back(7);
//     }
//     else{
//         ans.push_back(3);
//         ans.push_back(7);
//         ans.push_back(9);
//     }
//     }
//     sort(ans.begin(),ans.end());
//     for(auto x:ans){
//         cout<<x<<" ";
//     }
//     cout<<"\n";
// }
// return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the factorial modulo odd digits
long long factorial_mod(long long n, long long mod) {
    long long result = 1;
    for (long long i = 2; i <= n; i++) {
        result = (result * i) % mod;
        if (result == 0) break; // Stop early if result becomes 0
    }
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, d;
        cin >> n >> d;

        // Odd digits to check for divisibility
        vector<int> odd_digits = {1, 3, 5, 7, 9};
        vector<int> divisors;

        for (int odd : odd_digits) {
            if (odd == 1) {
                divisors.push_back(1); // 1 always divides
            } else {
                long long fact_mod = factorial_mod(n, odd);
                if (fact_mod == 0) {
                    divisors.push_back(odd);
                }
            }
        }

        // Output the divisor
        for (size_t i = 0; i < divisors.size(); i++) {
            cout << divisors[i];
            if (i < divisors.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
