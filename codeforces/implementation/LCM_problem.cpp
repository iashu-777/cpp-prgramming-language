#include<bits/stdc++.h>
#include <numeric>
using namespace std;
vector<int> lcmProblem(int l,int r){
    long long ans;
    for(int i=l;i<=r-1;i++){
        for(int j=i+1;j<=r;j++){
            
            ans=std::lcm(i,j);
            if(i>=l && i<=r && j>=l && j<=r && ans>=l && ans<=r){
                return {i,j};
            }
        }

    }
    return {-1,-1};
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
    
        vector<int> ans = lcmProblem(l, r);
        for(auto x:ans){
            cout << x << " ";
        }
        cout<<endl;
    }
    return 0;
}