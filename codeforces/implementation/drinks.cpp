#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int total=n*100;
    int orange=0;
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        orange+=k;
    }
    float ans=((float)orange/total)*100;
    printf("%.5f",ans);
    return 0;
}