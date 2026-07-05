#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll N, M;
    cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));
    for (ll r = 0; r < N; r++)
    {
        for (ll c = 0; c < M; c++)
        {
            cin >> grid[r][c];
        }
    }
    vector<pair<ll, ll>> ccells;
    map<pair<ll, ll>, ll> cell_id;
    ll cid = 0;
    for (ll r = 0; r < N; r++)
    {
        for (ll c = 0; c < M; c++)
        {
            if (grid[r][c] == 'C')
            {
                ccells.push_back({r, c});
                cell_id[{r, c}] = cid++;
            }
        }
    }
    ll num = ccells.size();
    vector<vector<ll>> adj(num);
    ll dr[] = {-1, 0, 1, 0};
    ll dc[] = {0, 1, 0, -1};
    for (ll ii = 0; ii < num; ii++)
    {
        pair<ll, ll> pos = ccells[ii];
        ll r = pos.first;
        ll c = pos.second;
        for (ll d = 0; d < 4; d++)
        {
            ll nr = r + dr[d], nc = c + dc[d];
            if (nr >= 0 && nr < N && nc >= 0 && nc < M && grid[nr][nc] == 'C')
            {
                ll jj = cell_id[{nr, nc}];
                adj[ii].push_back(jj);
            }
        }
    }
    for (ll r = 0; r < N; r++)
    {
        for (ll c = 0; c < M; c++)
        {
            if (grid[r][c] == 'R')
            {
                if (c > 0 && grid[r][c - 1] == 'C' && c < M - 1 && grid[r][c + 1] == 'C')
                {
                    ll left = cell_id[{r, c - 1}];
                    ll right = cell_id[{r, c + 1}];
                    adj[left].push_back(right);
                    adj[right].push_back(left);
                }
                if (r > 0 && grid[r - 1][c] == 'C' && r < N - 1 && grid[r + 1][c] == 'C')
                {
                    ll up = cell_id[{r - 1, c}];
                    ll dn = cell_id[{r + 1, c}];
                    adj[up].push_back(dn);
                    adj[dn].push_back(up);
                }
            }
        }
    }
    vector<ll> starts;
    for (ll ii = 0; ii < num; ii++)
    {
        if (adj[ii].size() == 1)
        {
            starts.push_back(ii);
        }
    }
    if (starts.size() != 2)
    {
        cout << 0 << endl;
        return 0;
    }
    ll start = starts[0];
    vector<ll> path;
    vector<bool> vis(num, false);
    ll cur = start;
    path.push_back(cur);
    vis[cur] = true;
    while (true)
    {
        bool found = false;
        for (ll nxt : adj[cur])
        {
            if (!vis[nxt])
            {
                vis[nxt] = true;
                path.push_back(nxt);
                cur = nxt;
                found = true;
                break;
            }
        }
        if (!found)
            break;
    }
    if (path.size() != static_cast<size_t>(num))
    {
        cout << 0 << endl;
        return 0;
    }
    vector<pair<ll, ll>> full_path;
    full_path.push_back(ccells[path[0]]);
    for (size_t ii = 0; ii + 1 < path.size(); ii++)
    {
        pair<ll, ll> p1 = ccells[path[ii]];
        ll r1 = p1.first;
        ll c1 = p1.second;
        pair<ll, ll> p2 = ccells[path[ii + 1]];
        ll r2 = p2.first;
        ll c2 = p2.second;
        if (abs(r1 - r2) + abs(c1 - c2) == 1)
        {
        }
        else
        {
            ll mr, mc;
            if (r1 == r2)
            {
                mc = (c1 + c2) / 2;
                mr = r1;
            }
            else
            {
                mr = (r1 + r2) / 2;
                mc = c1;
            }
            full_path.push_back({mr, mc});
        }
        full_path.push_back(p2);
    }
    ll ans = 0;
    for (ll j = 0; j < M; j++)
    {
        bool full = true;
        for (ll r = 0; r < N; r++)
        {
            if (grid[r][j] == '.')
            {
                full = false;
                break;
            }
        }
        if (full)
        {
            ll s = 0;
            for (size_t k = 1; k + 1 < full_path.size(); k++)
            {
                pair<ll, ll> prev_pos = full_path[k - 1];
                ll pr = prev_pos.first;
                ll pc = prev_pos.second;
                pair<ll, ll> cur_pos = full_path[k];
                ll cr = cur_pos.first;
                ll cc = cur_pos.second;
                pair<ll, ll> next_pos = full_path[k + 1];
                ll nr = next_pos.first;
                ll nc = next_pos.second;
                if (cc == j && pr == cr && pc == j - 1 && nc == j + 1)
                {
                    // L2R
                    ll sig = (grid[cr][j] == 'C' ? 1 : -1);
                    s += sig * 1;
                }
                else if (cc == j && pr == cr && pc == j + 1 && nc == j - 1)
                {
                    // R2L
                    ll sig = (grid[cr][j] == 'C' ? 1 : -1);
                    s += sig * (-1);
                }
            }
            ans += abs(s) / 2;
        }
    }
    for (ll i = 0; i < N; i++)
    {
        bool full = true;
        for (ll c = 0; c < M; c++)
        {
            if (grid[i][c] == '.')
            {
                full = false;
                break;
            }
        }
        if (full)
        {
            ll s = 0;
            for (size_t k = 1; k + 1 < full_path.size(); k++)
            {
                pair<ll, ll> prev_pos = full_path[k - 1];
                ll pr = prev_pos.first;
                ll pc = prev_pos.second;
                pair<ll, ll> cur_pos = full_path[k];
                ll cr = cur_pos.first;
                ll cc = cur_pos.second;
                pair<ll, ll> next_pos = full_path[k + 1];
                ll nr = next_pos.first;
                ll nc = next_pos.second;
                if (pc == cc && cr == i && pr == i - 1 && nr == i + 1)
                {
                    ll sig = (grid[i][cc] == 'C' ? 1 : -1);
                    s += sig * 1;
                }
                else if (pc == cc && cr == i && pr == i + 1 && nr == i - 1)
                {
                    ll sig = (grid[i][cc] == 'C' ? 1 : -1);
                    s += sig * (-1);
                }
            }
            ans += abs(s) / 2;
        }
    }
    cout << ans << endl;
    return 0;
}