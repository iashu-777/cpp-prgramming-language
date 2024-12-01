#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a=(k*l)/nl; //toast according to drink
    int b=c*d; //toast according to slices
    int z=p/np; //toast accroding to salt
    cout<<min({a,b,z})/n;
	return 0;
}
