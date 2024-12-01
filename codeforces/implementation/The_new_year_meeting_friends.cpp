#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=3;
	int i=0;
    vector<int>v(n);
    while(i<n){
    	cin>>v[i];
    	i++;
	}
	sort(v.begin(),v.end());
	cout<<v[2]-v[0];

	return 0;
}
