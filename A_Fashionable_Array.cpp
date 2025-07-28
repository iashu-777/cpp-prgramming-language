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
    int n;
    cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    ll count=0;
    ll lefti=1;
    ll righti=1;
    sort(v.begin(),v.end());
    if((v[0]%2==0&&v[n-1]%2==0)||(v[0]%2!=0 && v[n-1]%2!=0)){
        count=0;
    }
    else{
        for(int i=0;i<(n/2)-1;i++){
            if((v[i]%2==0 &&v[i+1]%2==0)||(v[i]%2!=0 && v[i+1]%2!=0)){
                lefti++;
            }
            else{
                break;
            }
        }
        for(int i=n-1;i>=(n/2)+1;i--){
            if((v[i]%2==0 &&v[i-1]%2==0)||(v[i]%2!=0 && v[i-1]%2!=0)){
                righti++;
            }
            else{
                break;
            }
        }
        count=min(lefti,righti);

    }
    cout<<count<<endl;
}
return 0;
}