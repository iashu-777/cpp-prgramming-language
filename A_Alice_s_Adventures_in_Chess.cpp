#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353

string func(ll n, ll a, ll b, string s)
{
    ll x = 0, y = 0;
    for (char i : s)
    {
        if (x == a && y == b)
        {
            return "YES";
        }
        if (i == 'N')
            y++;
        else if (i == 'S')
            y--;
        else if (i == 'E')
            x++;
        else
            x--;
    }
    if(x==0 && y==0)return "NO";
    if (x!=0 && a % x != 0)
    {
        return "NO";
    }
    ll l=0;
    // if(x!=0)
    l=a/x;
    x = x*l;
    y=y*l;
    for (char i : s)
    {
        if (x == a && y == b)
        {
            return "YES";
        }
        if (i == 'N')
            y++;
        else if (i == 'S')
            y--;
        else if (i == 'E')
            x++;
        else
            x--;
    }
    if (x == a && y == b)
    {
        return "YES";
    }
    return "NO";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string s;
        cin>>s;
        string ans = func(n, a, b, s);
        cout << ans << endl;
    }
    return 0;
}