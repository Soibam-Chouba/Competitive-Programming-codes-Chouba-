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
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        int totalMagic = 0;

        // Process the matrix from the bottom right to the top left
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                // If the current height is negative, we need to perform magic
                if (a[i][j] < 0) {
                    totalMagic += -a[i][j];  // Count how many times we need to increase
                    // Update the diagonal elements
                    for (int k = 0; k < n; k++) {
                        if (i + k < n && j + k < n) {
                            a[i + k][j + k] += -a[i][j];
                        } else {
                            break;
                        }
                    }
                }
            }
        }

        cout << totalMagic << endl;
    }

    return 0;
}
