#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n+1,s.end());
    int flag=0;
    if(s[0]>=s[2*n-1]){
        if(s[n-1]>=s[2*n-1])
        flag=1;
    }
    else{
        if(s[n-1]>=s[2*n-1])
        flag=1;
    }
    if(flag==1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
 
}