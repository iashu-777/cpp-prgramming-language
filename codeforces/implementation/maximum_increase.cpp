#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    while(n--){
    	int k;
    	cin>>k;
    	arr.push_back(k);
	}
	int max_length=1;
	int count=1;
	for(int i=0;i<arr.size()-1;i++){
		if(arr[i]>=arr[i+1]){
			max_length=max(max_length,count);
			count=1;
		}
		else{
			count++;
		}
	}
	max_length=max(max_length,count);
	cout<<max_length;
	return 0;
}
