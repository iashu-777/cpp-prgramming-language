#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int>ans;
    	for(int i=0;i<2*n;i++){
    		int k;
    		cin>>k;
    		ans.push_back(k);
		}
		sort(ans.begin(),ans.end());
		cout<<ans[n]-ans[n-1]<<endl;
	}
	return 0;
}
