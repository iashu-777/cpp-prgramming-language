#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    long long maxi=*max_element(arr.begin(),arr.end());
    long long mini=*min_element(arr.begin(),arr.end());
    cout<<maxi-mini<<" ";
    
    long long count_maxi=0,count_min=0;
    for(auto x:arr){
        if(x==maxi)
            count_maxi++;
        if(x==mini)
            count_min++;
    }
if(maxi==mini)
cout<<(long long)((long long)count_maxi*(count_maxi-1))/2;
else{
 long long ans=count_maxi*count_min;
  cout<<ans;
}
    return 0;
}