#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

vector<int>arr={3,1,2};
int n=arr.size();
void f(int i,vector<int>&temp){
    if(i>=n){
        for(auto x:temp)cout<<x<<" ";
        if(temp.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    temp.push_back(arr[i]);
    f(i+1,temp);
    temp.pop_back();
    f(i+1,temp);
}

int main(){

vector<int>temp;
f(0,temp);
return 0;
}