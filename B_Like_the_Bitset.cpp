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


string solve(ll n,ll k,string s){
    s=" "+s;
for (int i = 1, j = 1; i <= n; i = ++j) if (s[i] == '1') {
		while (j < n && s[j + 1] == '1') j++;
		if (j - i + 1 >= k) return "NO";
	}
    return "YES";
}

string solve2(ll n, ll k, string s){
     ll flag=0;
    for(ll i=0;i<n;i++){
        ll count=0;
        while(i<n && s[i]=='1'){
            count++;
            i++;
        }
        
        if(count>=k){
            flag=1;
        }
    }
    if(flag==1)return "NO";
    return "YES";
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll zeros=0;
    ll ones=0;
    ll j=0;
    vector<ll>pos;
    for(auto x:s){

        if(x=='1'){
            pos.push_back(j+1);
            ones++;
        }
        else
        zeros++;
        j++;
    }
//     ll flag=0;
//     for(ll i=0;i<n;i++){
//         ll count=0;
//         while(i<n && s[i]=='1'){
//             count++;
//             i++;
//         }
        
//         if(count>=k){
//             flag=1;
//         }
//     }
//     if(flag==1)cout<<"NO"<<endl;
//    else if(zeros<ones-1 ){
//         cout<<"NO"<<endl;
//     }
//     else if(k==1 && ones!=0){
//         cout<<"NO"<<endl;
//     }
if(solve2(n,k,s)=="NO"){
    cout<<"NO"<<endl;
}
    else{
        vector<ll>arr(n+1,0);
        ll k=0;
        ll po=1;
        while(ones--){
            arr[pos[k]]=po;
            po++;
            k++;
        }
        for(ll i=1;i<=n;i++){
            if(arr[i]==0){
                arr[i]=po;
                po++;
            }
        }
        cout<<"YES"<<endl;
        for(ll i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
}
return 0;
}