#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }



        int uniqueXorTriplets(vector<int>& nums) {
            unordered_set<int>st;
            for(int i=0;i<nums.size();i++){
                for(int j=i;j<nums.size();j++){
                    for(int k=j;k<nums.size();k++){
                        int t=nums[i]^nums[j]^nums[k];
                        st.insert(t);
                    }
                }
            }
            return st.size();
        }
    
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>v={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
// cout<<uniqueXorTriplets(v);
for(int i=1;i<20;i++){
    
    cout<<"if(n<"<<pow(2,i)<<")return "<<pow(2,i)<<endl;

}
return 0;
}