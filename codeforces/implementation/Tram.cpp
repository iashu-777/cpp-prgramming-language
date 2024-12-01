#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int max=INT_MIN;
	int bus=0;
    while(n--){
    	int a,b;
    	cin>>a>>b;
    		bus=bus-a;
    		bus+=b;
    		if(bus>max){
    			max=bus;
			}
		}
	
	cout<<max;
	return 0;
}
