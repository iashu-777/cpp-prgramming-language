#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1073741824
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b,c;
ll sum=0;
    ll ans=0;
    unordered_map<ll,ll>mpp;
cin>>a>>b>>c;
for(ll i=1;i<=a;i++){
    for(ll j=1;j<=b;j++){
        {
            for(ll k=1;k<=c;k++){
                if(mpp.find(i*j*k)!=mpp.end()){
                    ans+=mpp[i*j*k];
                    continue;
                }
            sum=0;
                for(ll t=1;t*t<=i*j*k;t++){
                   
                    if((i*j*k)%t==0){
                         if((i*j*k)/t==t){
                        sum++;
                    }else
                        sum+=2;
                    }

                }
                
                mpp[i*j*k]=(sum);
                ans+=sum;
            }
        }
}

}
cout<<ans%mod;
return 0;}