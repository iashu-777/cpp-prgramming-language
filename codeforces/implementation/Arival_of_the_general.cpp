#include<bits/stdc++.h>
using namespace std;
int general(vector<int>&heights){
	
	int i=0,j=0;
	int ans=0;
	int min=INT_MAX;
	int max=INT_MIN;
	//min
	for(int k=heights.size()-1;k>=0;k--){
		if(heights[k]<min){
			min=heights[k];
			i=k;
		}
	}
	//max
	for(int k=0;k<heights.size();k++){
		if(heights[k]>max){
			max=heights[k];
			j=k;
		}
	}
	 // Calculate swaps needed
    // If `j` comes before `i`, they don't interfere.
    if (j < i) {
        ans = j + (heights.size() - 1 - i);
    } 
    // If `j` comes after `i`, one swap is saved as they "cross over".
    else {
        ans = j + (heights.size() - 1 - i) - 1;
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<int>heights(n);
    int k;
    for(int i=0;i<n;i++){
    	cin>>k;
    	heights[i]=k;
	}
	int t=general(heights);
	cout<<t;
	return 0;
}
