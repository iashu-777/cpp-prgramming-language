#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v;
    for (int i = 0; i < n; i++)
    {
        vector<char> temp;
        for (int j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    pair<int, int> left={INT_MAX,INT_MAX};
    pair<int, int> right={INT_MIN,INT_MIN};
    pair<int, int> top={INT_MAX,INT_MAX};
    pair<int, int> bottom={INT_MIN,INT_MIN};
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == '*')
            {
                // left = min(left, {i, j});
                // right = max(right, {i, j});
                if(i<left.first){
                    left={i,j};
                }
                if(i>right.first){
                    right={i,j};
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j][i] == '*')
            {
                // top = min(top, {j, i});
                // bottom = max(bottom, {j, i});
                 if(j<top.second){
                    top={j,i};
                }
                if(j>bottom.second){
                    bottom={j,i};
                }
            }
        }
    }
    // cout<<top.first<<" "<<top.second<<endl;
    // cout<<bottom.first<<" "<<bottom.second<<endl;
    // cout<<left.first<<" "<<left.second<<endl;
    // cout<<right.first<<" "<<right.second<<endl;
    for(int i=min(left.first,top.first);i<=max(right.first,bottom.first);i++){
        for(int j=min(top.second,left.second);j<=max(bottom.second,right.second);j++){
            cout<<v[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}