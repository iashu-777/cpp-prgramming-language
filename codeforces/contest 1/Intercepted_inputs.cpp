#include<bits/stdc++.h>
using namespace std;
pair<int,int> dimension(vector<int>&a){
	pair<int,int>ans;
	
	int new_size=a.size()-2;
	unordered_map<int,int>mpp;
	for(auto x:a){
		mpp[x]++;
	}
	for(int i=1;i<=sqrt(new_size);i++){
		if(new_size%i==0){
			if(mpp.find(i)!=mpp.end() && mpp.find(new_size/i)!=mpp.end()){
				ans.first=i;
				ans.second=new_size/i;
				break;
			}
		}
	}
	return ans;
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
		pair<int,int>ans=dimension(a);
		cout<<ans.first<<" "<<ans.second<<endl;
	}
	return 0;
}
