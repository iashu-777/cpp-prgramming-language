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
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int ncopy=n;
    int flag=0;
    int moves=0;
    while(n!=1){
        if(n%6==0){
            n=n/6;
            moves++;
        }
        else if(n>ncopy){
            flag=1;
            break;
        }
        else{
            n=n*2;

            moves++;
        }
    }
    if(flag==1){
        cout<<-1<<endl;
    }
    else{
        cout<<moves<<endl;
    }
}
return 0;
}