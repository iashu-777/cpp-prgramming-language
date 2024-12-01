#include<bits/stdc++.h>
using namespace std;
int wrong_subtraction(int n,int k){
	while(k--){
		if(n%10==0){
			n=n/10;
		}
		else{
			n--;
		}
	}
	return n;
}
int main()
{
    int n;
    int k;
    cin>>n;
    cin>>k;
    int ans=wrong_subtraction(n,k);
    cout<<ans;
	return 0;
}
