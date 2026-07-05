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
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}










struct Friend {
    int id;
    int x;
    long long cost; 
};

void solve() {
    int n, m;
    long long k;
    if (!(cin >> n >> m >> k)) return;

    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
   
    sort(a.begin(), a.end());

    vector<Friend> friends(n);
    long long sum_y = 0;
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        friends[i] = {i, x, (long long)z - y};
        sum_y += y;
    }

   
    sort(friends.begin(), friends.end(), [](const Friend& a, const Friend& b) {
        return a.x < b.x;
    });

    
   
    k -= sum_y;

    priority_queue<long long> pq; 
    int friend_ptr = 0;
    int boxed_friends_count = 0;

    for (int val : a) {
        
        while (friend_ptr < n && friends[friend_ptr].x <= val) {
            pq.push(friends[friend_ptr].cost);
            friend_ptr++;
        }

        if (!pq.empty()) {
            pq.pop(); 
            boxed_friends_count++;
        }
    }

    vector<long long> unmatched_costs;
    while (!pq.empty()) {
        unmatched_costs.push_back(pq.top());
        pq.pop();
    }
    while (friend_ptr < n) {
        unmatched_costs.push_back(friends[friend_ptr].cost);
        friend_ptr++;
    }

    sort(unmatched_costs.begin(), unmatched_costs.end());

    int paid_friends_count = 0;
    for (long long cost : unmatched_costs) {
        if (k >= cost) {
            k -= cost;
            paid_friends_count++;
        } else {
            break;
        }
    }

    cout << boxed_friends_count + paid_friends_count << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

//https://gemini.google.com/app/883507cd5fa3e04d