#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    if(t>=1 && t<=1000)
    {
        while (t--) {
        int n, k;
        cin >> n >> k; // Read number of shelves and bottles

        if(n<200000 && k<200000){
        unordered_map<int, vector<int>> brandCosts;

        // Read each bottle's brand and cost
        for (int i = 0; i < k; ++i) {
            int b, c;
            cin >> b >> c;
            brandCosts[b].push_back(c); // Store costs by brand
        }

        long long maxEarnings = 0;

        // Calculate the maximum earnings
        for (const auto& pair : brandCosts) {
            vector<int> costs = pair.second;
            // Sort costs in descending order to pick the highest
            sort(costs.rbegin(), costs.rend());

            // We can only take up to `n` highest costs for this brand
            for (int i = 0; i < min(n, (int)costs.size()); ++i) {
                maxEarnings += costs[i];
            }
        }

        cout << maxEarnings << endl; // Output the result for the test case
        }
    }
    }


    return 0;
}
