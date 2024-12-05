//wrong answer
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int maxLength = n;
        vector<bool> used(n + 1, false);

        // Traverse the array and check for the conditions
        for (int i = 0; i < n; i++) {
            int idx = i + 1; // position in 1-based index
            int expected_value = n + 1 - idx;

            if (a[i] == expected_value && !used[idx]) {
                // If we can perform the operation, mark this index as used
                used[idx] = true;
                // Increment the max length by the number of zeros we can append
                maxLength += (idx - 1);
            }
        }

        cout << maxLength << endl;
    }

    return 0;
}

