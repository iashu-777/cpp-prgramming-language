#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int>>ans;
    int n;
    cin>>n;
    int i=0;
    while(n--){
    	int k;
    	cin>>k;
    	vector<int>temp;
//    	ans[i][0]=k;
	temp.push_back(k);
	temp.push_back(i+1);
//    	ans[i][1]=i+1;
ans.push_back(temp);
    	i++;
	}
	sort(ans.begin(),ans.end());
	for(int i=0;i<ans.size();i++){
		cout<<ans[i][1]<<" ";
	}
	return 0;
}
