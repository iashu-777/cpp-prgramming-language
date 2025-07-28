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
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<ll,ll>mpp;
    mpp[0]=0;
    mpp[1]=0;
    for(auto x:s){
        if(x=='0'){
            mpp[0]++;
        }
        else{
            mpp[1]++;
        }
    }
     ll good_pairs = 0;
        for(ll i = 0; i < n / 2; i++){
            if(s[i] == s[n - i - 1]) good_pairs++;
        }

        // Check if we can rearrange to get exactly k good pairs
        ll possible_changes = (n / 2) - good_pairs; // Number of mismatched pairs that can be changed

        if(k == possible_changes) {
            cout<<"YES";
        } else {
            cout<<"NO";
        }
        cout<<endl;
    

}
return 0;
}