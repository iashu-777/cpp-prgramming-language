#include <iostream>
#include <vector>
#include <set>

using namespace std;

/**
 * Logic:
 * 1. Array ke elements ko ek multiset mein store karein taaki wo sorted rahein.
 * 2. mex = 0 se start karein aur check karein ki kya hum current_mex bana sakte hain.
 * 3. Agar current_mex set mein hai, toh use use kar lein.
 * 4. Agar nahi hai, toh sabse chhota aisa number dhoondein jo >= 2 * current_mex + 1 ho.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    multiset<int> elements;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        elements.insert(x);
    }

    int current_mex = 0;
    while (true) {
        // Option 1: Kya current_mex pehle se array mein hai?
        auto it = elements.find(current_mex);
        
        if (it != elements.end()) {
            elements.erase(it); // Ek instance remove karein
            current_mex++;
        } else {
            // Option 2: Kya koi bada number hai jise modulo karke current_mex banaya ja sake?
            // Condition: a_i >= 2 * current_mex + 1
            auto it_large = elements.lower_bound(2 * current_mex + 1);
            
            if (it_large != elements.end()) {
                elements.erase(it_large);
                current_mex++;
            } else {
                // Ab aur koi number nahi mil sakta
                break;
            }
        }
    }
    cout << current_mex << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}