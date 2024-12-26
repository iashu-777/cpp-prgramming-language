#include <bits/stdc++.h>
using namespace std;
long long func(int n,int a,int b,int c){
long long days=0;
        days=(n/(a+b+c))*3;
        long long sum=(n/(a+b+c))*(a+b+c);
        if(sum>=n){
                return days;
            }
            sum+=a;
            days++;
            if(sum>=n){
                return days;
            }
            
            sum+=b;
            days++;
            if(sum>=n){
                return days;
            }
            sum+=c;
            days++;
            if(sum>=n){
                return days;
            }
        
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        

        cout<<func(n,a,b,c)<<"\n";
        
    }
    return 0;
}