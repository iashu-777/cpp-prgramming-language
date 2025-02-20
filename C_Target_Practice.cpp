#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a, b, c) for (ll i = a; i < b; i += c)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    vector<vector<int>> vec(10, vector<int>(10)); // Values are uninitialized (random)
    vec = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };
    loop(0, t, 1)
    {
        ll sum=0;
        for(ll i=0;i<10;i++){
            for(ll j=0;j<10;j++){
                char x;
                cin>>x;
                if(x=='X'){
                    sum+=vec[i][j];
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}