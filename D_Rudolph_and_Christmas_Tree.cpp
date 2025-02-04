#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)


long double are(long double d,long double h){
    return (long double)(d*h)/2;
}
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
    long double n,d,h;
    cin>>n>>d>>h;
    vector<long double>v;
    loop(0,n,1) {
        long double x;
        cin>>x;
        v.push_back(x);
    }
    long double area=0;
    loop(0,n-1,1){
        area+=are(d,h);
        if(abs(v[i+1]-v[i])<h){
            long double hide_h=h-(v[i+1]-v[i]);
            long double min_area=(long double)(d*(hide_h*hide_h))/(2*h);
            area=area-(min_area);
        }
    }
    area+=are(d,h);
    printf("%Lf\n",area);
}
return 0;
}