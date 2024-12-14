#include<bits/stdc++.h>
using namespace std;
int ans(vector<int>&days,int n){
    int i=0;
    int happy=0;
    int ap=1;
    int sum=0;
    if(days[0]==1){
        happy+=1;
        i=1;
    }
    while(i<n){
        sum+=days[i];
        if(sum%8==0 && sum==(8*i)){
            happy+=1;
            sum=0;
        }
        i++;
    }
    return happy;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>days;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            days.push_back(k);
        }
        cout<<ans(days,n);
        cout<<endl;
    }
}