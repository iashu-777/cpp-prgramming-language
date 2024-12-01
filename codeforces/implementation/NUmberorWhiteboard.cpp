#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
    while(t--){
    int n;
	cin>>n;
	set<int>arr;
	for(int i=0;i<n;i++){
		arr.insert(i+1);
	}
	vector<vector<int>>ans;
	int k;
	auto it_start=arr.begin();
	it_start++;
	it_start++;
	auto it_end=arr.end();
	it_end--;
	while(arr.size()>=2){
		
		int avg=ceil((*it_start+*it_end)/2);
		 auto it = next(arr.begin(), 1);
        arr.erase(it);
        arr.insert(avg);
		vector<int>temp;
		temp.push_back(*it_start);
		temp.push_back(*it_end);
		ans.push_back(temp);
		temp.clear();
		  auto it1 = prev(arr.end());
        arr.erase(it1); // Remove the element
	}
	cout<<*it_start<<endl;
	for(auto x:ans){
		for(auto y:x){
			cout<<y<<" ";
		}
		cout<<endl;
	}
		ans.clear();
		arr.clear();
	}
	return 0;
}
