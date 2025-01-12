#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> func(vector<vector<int>> teams) {
    vector<pair<int,pair<vector<int>,int>>>track;
    int i=1;
    for(auto &x:teams){
        sort(x.begin(), x.end(),greater<int>());
    }


      sort(teams.begin(), teams.end(), [](const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0]) {
            if (a.size() > 1 && b.size() > 1) {
                return a[1] > b[1];  // Compare second elements in descending order
            }
            return a.size() > b.size();  // Use size as a fallback comparison
        }
        return a[0] > b[0];  // Compare first elements in descending order
    });
// sort(teams.begin(),teams.end(),greater<vector<int>>());
    for(auto x:teams){
        int sum=accumulate(x.begin(),x.end(),0);
        track.push_back({sum,{x,i}});
        i++;
    }
    sort(track.begin(), track.end(), [](const pair<int, pair<vector<int>, int>>& a, const pair<int, pair<vector<int>, int>>& b) {
    return a.first > b.first;  // Compare sum in descending order
});

    vector<vector<int>> result;
    result.push_back({track[0].second.second,track[0].first,track[0].second.first[0]});
    for(int i=1;i<track.size();i++){
        if(track[i].first==track[i-1].first && track[i].second.first[0]==track[i-1].second.first[0]){
            result.push_back({track[i].second.second,track[i].first,track[i].second.first[0]});
        }
        else{
            break;
        }
    }
    return result;
//  vector<tuple<int, int, int>> track;  // sum, max element, index

//     for (int i = 0; i < teams.size(); i++) {
//         int sum = accumulate(teams[i].begin(), teams[i].end(), 0);
//         int maxElement = *max_element(teams[i].begin(), teams[i].end());
//         track.push_back({sum, maxElement, i + 1});
//     }

//     sort(track.begin(), track.end(), [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
//         if (get<1>(a) == get<1>(b)) {
//             return get<0>(a) > get<0>(b);  // Compare by sum if max elements are equal
//         }
//         return get<1>(a) > get<1>(b);  // Compare by max element
//     });

//     vector<vector<int>> result;
//     result.push_back({get<2>(track[0]), get<0>(track[0]), get<1>(track[0])});
//     for (int i = 1; i < track.size(); i++) {
//         if (get<0>(track[i]) == get<0>(track[i - 1]) && get<1>(track[i]) == get<1>(track[i - 1])) {
//             result.push_back({get<2>(track[i]), get<0>(track[i]), get<1>(track[i])});
//         } else {
//             break;
//         }
//     }
//     return result;
}

int main() {
    // initial code 
    vector<vector<int>> teams;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int team_size;
        cin >> team_size;
        vector<int> team(team_size);
        for (int j = 0; j < team_size; j++) {
            cin >> team[j];
        }
        teams.push_back(team);
    }
    // you have to implement the func() only
    vector<vector<int>> result = func(teams);

    // print the result(please don't modify this)
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2];
        } else {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        }
    }   
    // end of initial code
    return 0;
}