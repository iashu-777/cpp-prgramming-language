#include<bits/stdc++.h>
using namespace std;
int main(){
     freopen("input.txt", "r", stdin);  // Input file ko stdin se bind karte hain
    freopen("output.txt", "w", stdout); // Output file ko stdout se bind karte hain

    int n,m;
    cin>>n>>m;
    int f=n+m;
    int count=0;
    int d=0;
    string ans;
    if(n>m){
        d=n-m;
        n=n-m;
        while(d--){
            ans+='B';
            count++;
        }
    }
    else if(m>n){
        d=m-n;
        m=m-n;
        while(d--){
            ans+='G';
            count++;
        }
    }
    for(int i=0;i<f-count;i++){
        if(*ans.rbegin()=='G'){
            ans+='B';
        }
        else{
            ans+='G';
        }
 
    }
    cout<<ans<<endl;
    return 0;
}