#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool bouquetsNo(vector<int>&bloomDay,int day,int k,int m){
        int cnt=0;
        int no=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                cnt++;
            }
            else{
                no+=cnt/k;
                cnt=0;
            }
        }
        no+=cnt/k;
        if(no>=m){
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=high;
        if((long long)m*k>bloomDay.size()) return -1;
        while(low<=high){
            int mid=(low+high)/2;
            bool i=bouquetsNo(bloomDay, mid, k,m);
            if(i==true){
                ans= mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};