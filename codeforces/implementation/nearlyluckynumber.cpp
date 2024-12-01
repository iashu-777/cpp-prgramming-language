#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
    cin>>n;
    long long count=0;
    long long rem;
    while(n!=0){
    	rem=n%10;
    	if(rem==4 || rem==7){
    		count++;
		}
    	n=n/10;
	}
	if(count==7 || count==4){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
