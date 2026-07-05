// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // #define ll long long
// // // #define mod 998244353
// // // #define loop(a,b,c) for(ll i=a;i<b;i+=c)
// // // ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
// // // ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
// // // ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
// // // vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
// // // long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
// // // bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}





// // // int main(){
// // // ios_base::sync_with_stdio(false);
// // // cin.tie(NULL);
// // // cout.tie(NULL);
// // // ll t;
// // // cin>>t;
// // // while(t--){
// // // ll n;
// // // cin>>n;
// // // vector<vector<ll>>v;
// // // for(ll i=0;i<n;i++){
// // //     vector<ll>temp;
// // //     ll n1;
// // //     cin>>n1;
// // //     for(ll i=0;i<n1;i++){
// // //         ll x;
// // //         cin>>x;
// // //         temp.push_back(x);
// // //     }
// // //     reverse(temp.begin(),temp.end());
// // //     v.push_back(temp);
// // // }
// // // sort(v.begin(),v.end(),greater<vector<ll>>());
// // // for(auto x:v){
// // //     reverse(x.begin(),x.end());
// // // }
// // // // cout<<"HI"<<endl;
// // // // for(auto x:v){
// // // //     cout<<x.first<<" ";
// // // // }
// // // // cout<<"HI"<<endl;
// // // unordered_map<ll,ll>mpp;
// // // deque<ll>dq;
// // // for(ll i=0;i<v.size();i++){
// // //     for(ll j=0;j<v[i].size();j++){
// // //         dq.push_front(v[i][j]);
// // //     }
// // // }
// // // while(!dq.empty()){
// // //     ll num=dq.front();
// // //     dq.pop_front();
// // //     if(mpp.find(num)!=mpp.end()){
// // //         continue;
// // //     }
// // //     else{
// // //         mpp[num]++;
// // //         cout<<num<<" ";
// // //     }
// // // }
// // // cout<<endl;

// // // }

// // // return 0;
// // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // #define ll long long

// // // // int main(){
// // // //     ios_base::sync_with_stdio(false);
// // // //     cin.tie(NULL);
    
// // // //     ll t;
// // // //     cin >> t;
// // // //     while(t--){
// // // //         ll n;
// // // //         cin >> n;
// // // //         vector<vector<ll>> v(n);
// // // //         for(ll i = 0; i < n; i++){
// // // //             ll n1;
// // // //             cin >> n1;
// // // //             for(ll j = 0; j < n1; j++){
// // // //                 ll x;
// // // //                 cin >> x;
// // // //                 v[i].push_back(x);
// // // //             }
           
// // // //             reverse(v[i].begin(), v[i].end());
// // // //         }

    
// // // //         sort(v.begin(), v.end());


// // // //         vector<bool> seen(1000001, false);
// // // //         bool first = true;
// // // //         for(int i = 0; i < n; i++){
// // // //             for(ll x : v[i]){
// // // //                 if(!seen[x]){
// // // //                     if(!first) cout << " ";
// // // //                     cout << x;
// // // //                     seen[x] = true;
// // // //                     first = false;
// // // //                 }
// // // //             }
// // // //         }
// // // //         cout <<endl;
// // // //     }
// // // //     return 0;
// // // // }


// // #include <iostream>
// // #include <vector>
// // #include <algorithm>

// // using namespace std;

// // const int MAXA = 1000005;
// // int last_seen[MAXA];
// // bool used[MAXA];
// // int blog_seen[MAXA];
// // int blog_timer = 0;
// // int timer = 0;

// // void solve() {
// //     int n;
// //     if (!(cin >> n)) return;
// //     vector<vector<int>> s(n);
// //     timer++;
    
// //     vector<int> all_users_list;

// //     for (int i = 0; i < n; ++i) {
// //         int l;
// //         cin >> l;
// //         vector<int> a(l);
// //         for (int j = 0; j < l; ++j) cin >> a[j];
        
// //         vector<int> current_s;
// //         blog_timer++;
        
// //         // S_i is the sequence of unique users in reverse order of their last appearance
// //         for (int j = l - 1; j >= 0; --j) {
// //             if (blog_seen[a[j]] != blog_timer) {
// //                 current_s.push_back(a[j]);
// //                 blog_seen[a[j]] = blog_timer;
// //                 if (last_seen[a[j]] != timer) {
// //                     last_seen[a[j]] = timer;
// //                     all_users_list.push_back(a[j]);
// //                 }
// //             }
// //         }
// //         s[i] = current_s;
// //     }

// //     int total_users = all_users_list.size();
// //     for (int u : all_users_list) used[u] = false;

// //     vector<int> Q;
// //     vector<int> remaining;
// //     for (int i = 0; i < n; ++i) remaining.push_back(i);

// //     while (Q.size() < (size_t)total_users) {
// //         int best_idx_in_rem = 0;

// //         for (int i = 1; i < (int)remaining.size(); ++i) {
// //             int curr_blog = remaining[i];
// //             int best_blog = remaining[best_idx_in_rem];
            
// //             int p1 = 0, p2 = 0;
// //             bool i_smaller = false;
// //             while (true) {
// //                 while (p1 < (int)s[curr_blog].size() && used[s[curr_blog][p1]]) p1++;
// //                 while (p2 < (int)s[best_blog].size() && used[s[best_blog][p2]]) p2++;

// //                 if (p1 == (int)s[curr_blog].size() && p2 == (int)s[best_blog].size()) break;
// //                 if (p1 == (int)s[curr_blog].size()) { i_smaller = true; break; }
// //                 if (p2 == (int)s[best_blog].size()) { i_smaller = false; break; }

// //                 if (s[curr_blog][p1] < s[best_blog][p2]) { i_smaller = true; break; }
// //                 if (s[curr_blog][p1] > s[best_blog][p2]) { i_smaller = false; break; }
// //                 p1++; p2++;
// //             }
// //             if (i_smaller) best_idx_in_rem = i;
// //         }

// //         int b_idx = remaining[best_idx_in_rem];
// //         for (int val : s[b_idx]) {
// //             if (!used[val]) {
// //                 used[val] = true;
// //                 Q.push_back(val);
// //             }
// //         }
// //         remaining.erase(remaining.begin() + best_idx_in_rem);
// //     }

// //     for (int i = 0; i < (int)Q.size(); ++i) {
// //         cout << Q[i] << (i == (int)Q.size() - 1 ? "" : " ");
// //     }
// //     cout << "\n";
// // }

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int t;
// //     if (!(cin >> t)) return 0;
// //     while (t--) solve();
// //     return 0;
// // }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>

// using namespace std;

// // Global array to track users already added to Q.
// // User IDs can be up to 10^6, but total unique users are <= 3000.
// bool global_used[1000005];

// void solve() {
//     int n;
//     if (!(cin >> n)) return;

//     // Prepare each blog's contribution: reversed and unique users.
//     vector<vector<int>> s(n);
//     for (int i = 0; i < n; ++i) {
//         int l;
//         cin >> l;
//         vector<int> a(l);
//         for (int j = 0; j < l; ++j) cin >> a[j];
        
//         reverse(a.begin(), a.end());
//         set<int> local_seen;
//         for (int x : a) {
//             if (local_seen.find(x) == local_seen.end()) {
//                 s[i].push_back(x);
//                 local_seen.insert(x);
//             }
//         }
//     }

//     vector<bool> blog_done(n, false);
//     vector<int> used_indices;
//     vector<int> final_q;

//     // Greedy: always pick the blog that provides the smallest lexicographical suffix.
//     while (true) {
//         int best_idx = -1;
//         vector<int> best_sub;
//         bool found_non_empty = false;

//         for (int i = 0; i < n; ++i) {
//             if (blog_done[i]) continue;
            
//             // Calculate what this blog would contribute to Q right now.
//             vector<int> current_sub;
//             for (int x : s[i]) {
//                 if (!global_used[x]) {
//                     current_sub.push_back(x);
//                 }
//             }

//             // If a blog adds nothing new, mark it done and skip.
//             if (current_sub.empty()) {
//                 blog_done[i] = true;
//                 continue;
//             }

//             // Standard vector comparison handles lexicographical logic (including prefixes).
//             if (!found_non_empty || current_sub < best_sub) {
//                 best_sub = std::move(current_sub);
//                 best_idx = i;
//                 found_non_empty = true;
//             }
//         }

//         if (!found_non_empty) break;

//         // Commit the best contribution found to the final sequence.
//         blog_done[best_idx] = true;
//         for (int x : best_sub) {
//             final_q.push_back(x);
//             global_used[x] = true;
//             used_indices.push_back(x);
//         }
//     }

//     for (int i = 0; i < (int)final_q.size(); ++i) {
//         cout << final_q[i] << (i == (int)final_q.size() - 1 ? "" : " ");
//     }
//     cout << "\n";

//     // Reset global array for the next test case efficiently.
//     for (int x : used_indices) global_used[x] = false;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     if (!(cin >> t)) return 0;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 998244353
#define loop(a,b,c) for(ll i=a;i<b;i+=c)
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll sum_of_digits(ll n){ ll s=0; for(;n;n/=10) s+=n%10; return s; }
vector<bool> sieve(ll n){ vector<bool> v(n+1,1); v[0]=v[1]=0; for(ll i=2;i*i<=n;i++) if(v[i]) for(ll j=i*i;j<=n;j+=i) v[j]=0; return v; }
long long countDivisors(long long n){ long long c=0; for(long long i=1;i*i<=n;i++) if(n%i==0) c+=(i==n/i?1:2); return c; }
bool isPowerOftwo(ll n){ return (n > 0) && ((n & (n - 1)) == 0);}
bool used[1000005];

void solve(){
    int n;
    cin>>n;

    vector<vector<int>> v(n);

    for(int i=0;i<n;i++){
        int l;
        cin>>l;

        vector<int> a(l);
        for(int j=0;j<l;j++) cin>>a[j];

        reverse(a.begin(),a.end());

        set<int> st;
        for(auto x:a){
            if(!st.count(x)){
                v[i].push_back(x);
                st.insert(x);
            }
        }
    }

    vector<int> done(n,0);
    vector<int> ans;
    vector<int> reset;

    while(true){
        int idx=-1;
        vector<int> best;
        bool ok=false;

        for(int i=0;i<n;i++){
            if(done[i]) continue;

            vector<int> cur;
            for(auto x:v[i]){
                if(!used[x]) cur.push_back(x);
            }

            if(cur.empty()){
                done[i]=1;
                continue;
            }

            if(!ok || cur<best){
                best=cur;
                idx=i;
                ok=true;
            }
        }

        if(!ok) break;

        done[idx]=1;
        for(auto x:best){
            ans.push_back(x);
            used[x]=1;
            reset.push_back(x);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    for(auto x:reset) used[x]=0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
}