#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
 ll lbound(vector<ll>v,ll x){ ll k= lower_bound(v.begin(), v.end(), x) - v.begin();return k;}
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }


  struct TreeNode {
      int data;
     TreeNode *left;
      TreeNode *right;
       TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
  };
 

class Solution{
	public:
		vector<int> inorder(TreeNode* root){
	        //your code goes here
            stack<TreeNode*>st;
            vector<int>v;
            TreeNode* node=new TreeNode(0);
            while(true){
                if(root!=NULL){
                    st.push(root);
                    if(root->left!=NULL){
                        if(root->left->data > root->data){
                            swap(root->left->data ,root->data);
                        }
                    }
                    root=root->left;
                    
                }
                else{
                    if(st.empty()==1)break;
                    node=st.top();
                    v.push_back(node->data);
                    st.pop();
                     if(node->right!=NULL){
                        if(node->right->data < node->data){
                            swap(node->left->data ,node->data);
                        }
                    }
                    root=node->right;
                }
            }
            return v;

		}
};



int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

return 0;
}