#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>b[i+1]){
                ans+=(a[i]-b[i+1]);
            }
        }
        cout<<ans+a[n-1]<<endl;

    }
}