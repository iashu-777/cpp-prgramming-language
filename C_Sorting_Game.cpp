#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll flag=0;
    ll count=0;
    ll count1=0;
    for(ll i=0;i<n;i++){
        // while(i<n-1 && ((s[i]=='1' && (s[i+1]=='1' || s[i+1]=='0')) )){
        //     while(i<n-2 && s[i+1]=='0' && s[i+2]=='0')i++;
        //     flag=1;
        //     i++;   
        // }
        // if(flag==1){
        //     count++;
        //     flag=0;
        // }
        // if(s[i]=='1' && s[i+1]=='0')count++;
        if(s[i]=='1'){
            count++;
        }
        if(s[i]=='0'){
            count1+=count;
        }
    }
    flag=0;
    if(count1%2!=0){
        cout<<"Alice"<<endl;
        vector<ll>v1;                       
        for(ll i=0;i<n;i++){
            v1.push_back(i+1);
        while(i<n-1 && (s[i]=='1' && (s[i+1]=='1' || s[i+1]=='0'))){
             while(i<n-2 && s[i+1]=='0' && s[i+2]=='0'){
                i++;
            v1.push_back(i+1);
                
            }
            v1.push_back(i+2);
            flag=1;
            i++;   
        }
        if(flag==1){
            break;
        }
        else{
            v1.clear();
        }
    }
    cout<<v1.size()<<endl;
    for(auto x:v1){
        cout<<x<<" ";
    }

    }
    else{
        cout<<"Bob";
    }
    // cout<<"count"<<count<<endl;
    cout<<endl;
}
return 0;
}