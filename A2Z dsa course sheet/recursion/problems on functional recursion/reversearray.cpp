#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

void func(int arr[],int i,int n){
    if(i>=n)return ;
    else{
        swap(arr[i],arr[n]);
        func(arr,i+1,n-1);
    }

}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int arr[5]={1,2,3,4,5};
func(arr,0,4);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}