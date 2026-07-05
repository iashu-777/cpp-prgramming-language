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
bool checkKthBit(int n, int k) { int val = (1 << k); if ((n & val) != 0) { return true; } return false;}



void check(string s){
    ll n=s.size();
    ll opr=1;
    // ll color=1;
    vector<ll>v;
    stack<char>st;
    for(ll i=0;i<n;i++){
        if(st.size()==0){
            // if(opr==1){
            //     color=1;
            // }
            // else if(opr==2){
            //     color=2;
            // }
            if(s[i]==')'){
                opr=1;
            }
            else{
                opr=2;
            }
            st.push(s[i]);
        }
        else{
            if(st.top()=='(' && s[i]==')'){
                opr=2;
                st.pop();
            }
            else if(st.top()==')' && s[i]=='('){
                opr=1;
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        v.push_back(opr);
    }
    if(st.size()!=0){
        cout<<-1<<endl;
    }
    else{
        ll distinct = unordered_set<ll>(v.begin(), v.end()).size();
        

        cout<<distinct<<endl;
        if(distinct==1){
        for(ll i=0;i<n;i++){
            cout<<1<<" ";
        }    
        }
        else{

            for(ll i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
}

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
    // string t=s;
    // reverse(t.begin(),t.end());
    // if(check(s)|| check(t)){
    //     cout<<1<<endl;
    //     for(ll i=0;i<n;i++){
    //         cout<<1<<" ";
    //     }
    //     cout<<endl;
    // }
    // else{

    //     stack<char>st;
    //     ll color=1;
    //     vector<ll>v;
    //     for(ll i=0;i<n;i++){
    //         if(st.size()==0){
    //             if(color==1){
    //                 color=2;
    //             }
    //             else{
    //                 color=1;
    //             }
                
    //             st.push(s[i]);
    //         }
    //         else{
    //             if((st.top()=='('&& s[i]==')' )||(st.top()==')' && s[i]=='(')){
    //                 st.pop();
    //             }
    //             else{
    //                 st.push(s[i]);
    //             }
    //         }
    //         v.push_back(color);
    //     }
    //     if(st.size()==0){
    //         cout<<2<<endl;
    //         for(auto x:v){
    //             cout<<x<<" ";
    //         }
    //         cout<<endl;
    //     }
    //     else{
    //         cout<<-1<<endl;
    //     }
    // }
    check(s);
}
return 0;
}