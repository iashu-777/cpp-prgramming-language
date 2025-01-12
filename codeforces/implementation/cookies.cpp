#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count_even=0;
    int count_odd=0;
    int sum=0;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        if(k%2==0)
        count_even++;
        else
        count_odd++;
        sum+=k;
    }
    if(sum%2==0){
        cout<<count_even;
    }
    else
    cout<<count_odd;
    return 0;
}