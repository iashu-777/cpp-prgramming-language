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
        string s;
        cin>>s;
        ll flag=0;
        ll flag3=0;
        for(ll i=0;i<s.size()-1;i++){
            if((s[i]=='>' && s[i+1]=='*') ||(s[i]=='*' && s[i+1]=='<')){
                flag3=1;
                break;
            }
        }
        for(ll i=0;i<s.size();i++){
            ll j=i;
            while(j<s.size()-1 && s[j+1]=='*'){
                j++;
            }
            j++;
            if(i<s.size()&& j<s.size()&& s[i]=='>' && s[j]=='<'){
                flag=1;
                break;
            }
        }
        ll ans=0;
        if(flag==1 && s[0]!='<' && s[s.size()-1]!='>'){
            // cout<<-1<<endl;
            ans=-1;
        }
        else if(flag3==1){
            ans=-1;
        }
        else{
            
            ll flag2=0;
            for(ll i=0;i<s.size();i++){
                if(s[i]=='<' || s[i]=='>'){
                    flag2=1;
                    break;
                }
            }
            if(flag2==0 && s.size()>1){
                // cout<<'k0';
                ans=-1;
            }
            else{

                ll i=0,j=s.size()-1;
                ll count1=0;
                while(i<s.size() && (s[i]=='<'|| s[i]=='*') ){
                    count1++;
                    i++;
                }
                ll count2=0;
        while(j>=0 && (s[j]=='>'|| s[j]=='*') ){
            count2++;
            j--;
        }
        ans=max(count1,count2);
    }
    }
    cout<<ans<<endl;
    }
    return 0;
    }