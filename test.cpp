#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
    unordered_set<int>s(nums.begin(),nums.end());
    int count=0;
    int max_count=0;
    for(auto it:s){
        int n=it;
        if(s.find(sqrt(n))!=s.end()){
            it++;
        }
        else{
            count=1;
            while(s.find(n*n)!=s.end()){
                n=n*n;
                count++;
            }
            max_count=max(count,max_count);
        }
    }
    if(max_count>=2)
    return max_count;
    else
    return -1;
    }
};
int main(){
    
    
}