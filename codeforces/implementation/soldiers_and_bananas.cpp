#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,n,w;
    cin>>k>>n>>w;
    long long ans=((w*((2*k)+((w-1)*k)))/2)-n;
    long long z=ans<0?0:ans;
    cout<<z;
	return 0;
}
