#include<bits/stdc++.h>
using namespace std;
int max_score(vector<int>&a){
	int count=0;
	unordered_map<int,int>mpp;
	for(auto x:a){
		mpp[x]++;
	}
	for(auto x:mpp){
		if(x.second>1){
			count=count+ceil(x.second/2);
		}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	
    while(t--){
    	int n;
    	cin>>n;
    	vector<int>a(n);
    	int k;
    	for(int i=0;i<n;i++){
    		cin>>k;
    		a[i]=k;
		}
		cout<<max_score(a)<<endl;
	}
	return 0;
}
