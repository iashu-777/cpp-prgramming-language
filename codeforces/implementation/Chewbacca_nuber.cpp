#include<bits/stdc++.h>
using namespace std;
long long min_num(long long* l){
	string k=to_string(*l);
	int i=0;
	if(k[i]=='9'){
		i=1;
	}
	for(;i<k.size();i++){
		if(k[i]>'4'){
			char t=('9'-k[i])+48;
			k[i]=t;
		}
	}
	return stoll(k);
}
int main()
{
    long long x;
    cin>>x;
    long long j=min_num(&x);
    cout<<j;
    
	return 0;
}
