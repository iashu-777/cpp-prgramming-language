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
    string p;
    string s;
    cin>>p;
    cin>>s;
    ll i=0,j=0;
    ll pl,pr,sl,sr;
    pl=pr=sl=sr=0;
    ll flag=0;
    while(i<p.size()|| j<s.size()){
        if(i<p.size()&&p[i]=='L'){
            pl++;
            i++;
        }else if(i<p.size()){
            pr++;
            i++;
        }
        if(sl>2*pl){
            flag=1;
            break;
        }
        if(sr>2*pr){
            flag=1;
            break;
        }
        if(j<s.size()&& s[j]=='L'){
            sl++;
            j++;
        }
        else if(j<s.size()){
            sr++;
            j++;
        }
        if(sl>2*pl){
            flag=1;
            break;
        }
        if(sr>2*pr){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    cout<<endl;
}
return 0;
}