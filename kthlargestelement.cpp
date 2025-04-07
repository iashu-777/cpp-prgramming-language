#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }


int findKthLargest(vector<int>& nums, int k) {
    // priority_queue<int,vector<int>,greater<int>>pq;
    priority_queue<int>pq;
    for(auto x:nums){
        pq.push(x);
    }
    k--;
    while(k--){
        pq.pop();
    }
    return pq.top();
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    ll n;
    ll k;
    cin>>n>>k;
    vector<int>nums;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<findKthLargest(nums,k)<<endl;
}

return 0;
}
    