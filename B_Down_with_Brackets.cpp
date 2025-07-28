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
    int n=s.size();
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='('&&s[i+1]==')'){
            flag++;
        }
    }
    if(flag%2==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
}
return 0;
}