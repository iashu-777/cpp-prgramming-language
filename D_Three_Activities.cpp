#include <bits/stdc++.h>

using namespace std;

// Function to find the indices of the top 3 maximum values in the array
vector<int> findMax3(vector<int> &arr) {
	// Create a vector of pairs to store value and its index
	vector<pair<int, int>> tmp(arr.size());

	// Populate the vector with values and their respective indices
	for (int i = 0; i < tmp.size(); i++) { // (value, index)
		tmp[i].first = arr[i];
		tmp[i].second = i;
	}

	// Sort the vector in descending order based on values
	sort(tmp.rbegin(), tmp.rend()); // O(N log N)

	// Vector to store indices of the top 3 maximum values
	vector<int> ans(3);

	// Extract the indices of the top 3 maximum values
	for (int i = 0; i < 3; i++)
		ans[i] = tmp[i].second;

	return ans;
}

int main() {
	int t;
	cin >> t; // Read the number of test cases

	while (t--) {
		int n;
		cin >> n; // Read the number of days

		// Vectors to store the number of friends for each activity on each day
		vector<int> a(n), b(n), c(n);

		// Read the number of friends for skiing on each day
		for (int i = 0; i < n; i++)
			cin >> a[i]; // O(N)
		// Read the number of friends for a movie on each day
		for (int i = 0; i < n; i++)
			cin >> b[i]; // O(N)
		// Read the number of friends for board games on each day
		for (int i = 0; i < n; i++)
			cin >> c[i]; // O(N)

		// Find the indices of the top 3 maximum values for each activity
		vector<int> maxa = findMax3(a); // O(N log N)
		vector<int> maxb = findMax3(b);
		vector<int> maxc = findMax3(c);

		int ans = 0;
		// Iterate over all combinations of the top 3 days for each activity
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				for (int k = 0; k < 3; k++) {
					int x = maxa[i], y = maxb[j], z = maxc[k];

					// Ensure all selected days are distinct
					if ((x == y) or (y == z) or (z == x))
						continue;

					// Calculate the total number of friends and update the answer
					ans = max(ans, a[x] + b[y] + c[z]); // O(1)
				}
			}
		} // O(3^3) -> O(1)

		cout << ans << endl; // Output the result for the current test case
	}
}

// Total Time Complexity (TC): O(N log N)
// Space Complexity (SC): O(N)
