#include<bits/stdc++.h>
using namespace std;
int minimumSize(vector<int>& nums, int maxOperations) {
    //init priority queue max heap
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto x:nums){
        pq.push(x);
    }
    while(maxOperations--){
        int k=pq.top();
        int div=2;
        while(k%div==0){
            div++;
        }
        pq.pop();
        pq.push(k/div);
        pq.push(k-(k/div));
    }
    return pq.top();
    }
    int main() {
        int n;
        vector<int>nums;
        
    }
    // problem_links = [
    //     "https://codeforces.com/problemset/problem/2047/A",
    //     "https://codeforces.com/problemset/problem/2042/B",
    //     "https://codeforces.com/problemset/problem/2042/A",
    //     "https://codeforces.com/problemset/problem/2039/B",
    //     "https://codeforces.com/problemset/problem/2039/A",
    //     # Add more links here
    // ]