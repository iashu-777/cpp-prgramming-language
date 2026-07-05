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
  ll lbound(const vector<ll>& v, ll key, ll i, ll j){ return lower_bound(v.begin()+i, v.begin()+j+1, key) - (v.begin()+i); }





int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
for(ll tt=1;tt<=t;tt++){


    string s;
    cin>>s;

    // if(t==16624 && tt==64){
    //     cout<<"?"<<s<<"?";
    // }
    ll n=s.size();
    ll count=0;
    for(auto x:s){
        if(x=='0'){
            count++;
        }
    }
    if(count==0){
        cout<<n*n<<endl;
    }
    else if(count==n){
        cout<<0<<endl;
    }
    else{
        //first ones and last ones can contribute
        ll c1=0;
        ll c2=0;
        ll i=0;
        while(i<n && s[i]=='1'){
            c1++;
            i++;
        }
        ll j=n-1;
        while(j>=0 && s[j]=='1'){
            c2++;
            j--;
        }
        //now take full string in consideration
        ll maxi=0;
        i=0;
        j=0;
        while(i<n && j<n){
            while(j<n-1 && s[j]=='1' && s[j]==s[j+1]){
                j++;
            }
            maxi=max(j-i+1,maxi);
            j++;
            i=j;
        }
        maxi=max(maxi,c1+c2);
        if(maxi%2==0){
            cout<<(maxi/2)*(maxi/2+1)<<endl;
        }
        else{
            cout<<(maxi/2+1)*(maxi/2+1)<<endl;
        }
    }
}
return 0;
}