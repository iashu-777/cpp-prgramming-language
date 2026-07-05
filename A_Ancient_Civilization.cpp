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


string decimalToBinary(int n, int k) {
    string bin = "";

    // decimal to binary
    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }

    if (bin.empty()) bin = "0";  // special case when n = 0

    reverse(bin.begin(), bin.end());

    // agar length chhoti hai to left side se zeroes add karo
    if ((int)bin.size() < k) {
        bin = string(k - bin.size(), '0') + bin;
    }
    else if ((int)bin.size() > k) {
        // agar bin > k ho, to sirf last k bits rakh lo
        bin = bin.substr(bin.size() - k);
    }

    return bin;
}

int binaryToDecimal(const string &bin) {
    int result = 0;
    for (char c : bin) {
        result = result * 2 + (c - '0');
    }
    return result;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

ll t;
cin>>t;
while(t--){
    ll n,l;
    cin>>n>>l;
    vector<ll>v;
    loop(0,n,1){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    vector<string>v1;
    for(auto x:v){
        v1.push_back(decimalToBinary(x,l));
    }
    string ans="";
    for(ll i=0;i<l;i++){
        ll c1=0;
        ll c0=0;
        for(ll j=0;j<n;j++){
           if( v1[j][i]=='0')c0++;
           else c1++;
        }
        if(c1<=c0)ans+='0';
        else ans+='1';
    }
    cout<<binaryToDecimal(ans)<<endl;
}

return 0;
}