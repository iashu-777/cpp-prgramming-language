#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



vector<int>arr={1,1,2};
int n=arr.size();
int k=2;
int f(int i,int s){
    if(i>=n){
        if(s==k){
            
            return 1;
        }
        else return 0;
    }
    
    s+=arr[i];
    int l=f(i+1,s);
    s-=arr[i];
   int r= f(i+1,s);
   return l+r;
}

int main(){


int s=0;
cout<<f(0,s);
return 0;
}