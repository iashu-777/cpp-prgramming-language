#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int x;
    cin>>x;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==x){
            ans=mid;
            low=mid+1;
        }
        else if(nums[mid]>x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans;
}