//it's wrong
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

        vector<pair<int, int>> stamps(n);
        int totalWidth = 0;
        int totalHeight = 0;

        for (int i = 0; i < n; i++) {
            cin >> stamps[i].first >> stamps[i].second;
            totalWidth += stamps[i].first;
            totalHeight = max(totalHeight, stamps[i].second);
        }

        // The minimum perimeter can be calculated as follows:
        // Perimeter of the bounding box that encompasses all the stamps
        int perimeter = 2 * (totalWidth + totalHeight);
        cout << perimeter << endl;
    }

    return 0;
}

