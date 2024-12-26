// // #include<bits/stdc++.h>
// // using namespace std;
// // string func(int n,int m,int k,vector<int>hide,vector<int>knows){
// //     string ans;
// //     if(knows[k-1]<n || knows.size()<hide.size()-1){
// //         int l=m;
// //         while(l--){
// //             ans+='0';
// //         }
// //         return ans;
// //     }
// //     unordered_set<int>st;
// //     for(auto x:hide){
// //         st.insert(x);
// //     }
// //     for(auto x:knows){
// //         if(st.find(x)!=st.end())
// //         st.erase(x);
// //     }
// //     if(st.empty()){
// //         int l=m;
// //         while(l--){
// //             ans+='1';
// //         }
// //         return ans;
// //     }
// //     else{
// //         int key=*st.begin();
// //         int index;
// //         for(int i=0;i<m;i++){
// //             if(key==hide[i]){
// //                 index=i;
// //                 break;
// //             }
// //         }
// //         for(int i=0;i<m;i++){
// //             if(i==index){
// //                 ans+='1';
// //             }
// //             else{
// //                 ans+='0';
// //             }
// //         }
// //     }
// // return ans;

// // }
// // int main(){
// //     int t;
// //     cin>>t;
// //     while(t--){
// //         int n,m,k;
// //         cin>>n>>m>>k;
// //         vector<int> hide(m);
// //         vector<int> knows(n);
// //         for(int i=0;i<m;i++) cin>>hide[i];
// //         for(int i=0;i<k;i++) cin>>knows[i];
// //         cout<<func(n,m,k,hide,knows)<<endl;
// //     }

// // }

// #include<bits/stdc++.h>
// using namespace std;

// string func(int n, int m, int k, vector<int> hide, vector<int> knows) {
//     string ans;

//     // Check if Monocarp knows fewer questions than required to pass any list
//     if (knows[k-1] < n || knows.size() < n - 1) {
//         int l = m;
//         while (l--) {
//             ans += '0';
//         }
//         return ans;
//     }

//     unordered_set<int> st(hide.begin(), hide.end()); // Create a set of hidden questions
//     for (auto x : knows) {
//         if (st.find(x) != st.end())
//             st.erase(x); // Remove known questions from the set
//     }

//     if (st.empty()) {
//         // If all hidden questions are known, Monocarp passes all lists
//         int l = m;
//         while (l--) {
//             ans += '1';
//         }
//         return ans;
//     } else {
//         // If there are questions Monocarp doesn't know, determine which list(s) he can pass
//         int key = *st.begin();
//         int index = -1;

//         // Find the index of the list Monocarp cannot pass
//         for (int i = 0; i < m; i++) {
//             if (key == hide[i]) {
//                 index = i;
//                 break;
//             }
//         }

//         for (int i = 0; i < m; i++) {
//             if (i == index) {
//                 ans += '1';
//             } else {
//                 ans += '0';
//             }
//         }
//     }

//     return ans;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, m, k;
//         cin >> n >> m >> k;

//         vector<int> hide(m);
//         vector<int> knows(k);

//         for (int i = 0; i < m; i++) cin >> hide[i];
//         for (int i = 0; i < k; i++) cin >> knows[i];

//         cout << func(n, m, k, hide, knows) << endl;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

string func(int n, int m, int k, vector<int> hide, vector<int> knows) {
    unordered_set<int> knownSet(knows.begin(), knows.end()); // Store known questions in a set
    string result;

    for (int i = 0; i < m; i++) {
        if (knownSet.find(hide[i]) == knownSet.end()) {
            // If the missing question is not known, Monocarp cannot pass
            result += '0';
        } else {
            // Otherwise, Monocarp can pass
            result += '1';
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> hide(m); // Questions missing in each list
        vector<int> knows(k); // Questions Monocarp knows

        for (int i = 0; i < m; i++) cin >> hide[i];
        for (int i = 0; i < k; i++) cin >> knows[i];

        cout << func(n, m, k, hide, knows) << endl;
    }

    return 0;
}
