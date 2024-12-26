#include<bits/stdc++.h>
using namespace std;
// Recursive function to calculate GCD
long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate LCM using GCD
long long lcm(long long a, long long b) {
    return abs(a * b) / gcd(a, b); 
}
vector<long long> lcmProblem(int l,int r){
    long long ans;
    for(long long i=l;i<r;i++){
         long long j = 2 * i; // Consider j as 2*i for minimum LCM
        if (j > r) break; // If j goes out of range, break
         return {i, j};
        }

    
    return {-1,-1};
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
    
        vector<long long> ans = lcmProblem(l, r);
        for(auto x:ans){
            cout << x << " ";
        }
        cout<<"\n";
    }
    return 0;
}