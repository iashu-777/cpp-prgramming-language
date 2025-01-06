#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int y, k, n;
cin>>y>>k>>n;
int x=k-y%k;
int count=0;
while(x+y<=n){
    cout<<x<<" ";
    x+=k;
    count++;
}
if(count==0)
cout<<-1;
    return 0;
}