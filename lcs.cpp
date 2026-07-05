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


 int longestCommonSubsequence(string text1, string text2) {
        int r = text1.size();
        int c = text2.size();
        vector<vector<int>> dp(r + 1, vector<int>(c + 1, 0));

        for (int ind1 = 1; ind1 <= r; ind1++) {
            for (int ind2 = 1; ind2 <= c; ind2++) {
                if (text1[ind1 - 1] == text2[ind2 - 1]) {
                    dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
                } else {
                    dp[ind1][ind2] =
                        max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
                }
            }
        }
        for(auto x:dp){
            for(auto b:x){
                cout<<b<<" ";
            }
            cout<<endl;
        }
        return dp[r][c];
    }


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);


cout<<endl;
cout<<longestCommonSubsequence("abaaa","baabaca")<<endl;

return 0;
}