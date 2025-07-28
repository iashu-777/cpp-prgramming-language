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
void f(int i,vector<int>&temp,int s){
    if(i>=n){
        if(s==k){
            for(auto x:temp)cout<<x<<" ";
            cout<<endl;
        }
        return;
    }
    temp.push_back(arr[i]);
    s+=arr[i];
    f(i+1,temp,s);
    temp.pop_back();
    s-=arr[i];
    f(i+1,temp,s);
}

int main(){

vector<int>temp;
int s=0;
f(0,temp,s);
return 0;
}