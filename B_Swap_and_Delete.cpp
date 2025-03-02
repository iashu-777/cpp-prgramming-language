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
    string s;
    cin>>s;
    unordered_map<char,ll>mpp;
    for(auto x:s){
        mpp[x]++;
    }
    ll count=0;
    for(auto x:s){
        if(x=='1')
        {
            if(mpp.find('0')!=mpp.end()){
                mpp['0']--;
                count++;
                if(mpp['0']==0){
                    mpp.erase('0');
                }
            }
            else{
                break;
            }
        }
        else{
            if(mpp.find('1')!=mpp.end()){
                mpp['1']--;
                count++;
                if(mpp['1']==0){
                    mpp.erase('1');
                }
            }
            else{
                break;
            }
        }
    }
    cout<<s.size()-count<<endl;
}
return 0;
}