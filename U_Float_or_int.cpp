    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define ld long double

    #define mod 998244353
    #define loop(a,b,c) for(ll i=a;i<b;i+=c)
    ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
    ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



    int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double t;
    cin>>t;
    float k=(int)t;
    float *b= (&k);
    int a=t;
    float ans=t-a;
    // cout<<ans<<endl;
    if(ans>0.0){
        cout<<"float"<<" "<<a<<" "<<t-floor(t);
    }
    else{
        cout<<"int"<<" "<<a;
    }
    cout<<endl;
    return 0;
    }