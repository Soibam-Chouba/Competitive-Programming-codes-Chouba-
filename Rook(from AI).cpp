#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    cin.ignore(); // To ignore the newline after the integer input

    // Store results to output later
    vector<string> results[t];

    for (int i = 0; i < t; ++i) {
        string position;
        getline(cin, position); // Read the position as a string

        char col = position[0]; // Column (a-h)
        int row = position[1] - '0'; // Row (1-8)

        // Calculate vertical moves
        for (int r = 1; r <= 8; ++r) {
            if (r != row) {
                results[i].push_back(string(1, col) + to_string(r));
            }
        }

        // Calculate horizontal moves
        for (char c = 'a'; c <= 'h'; ++c) {
            if (c != col) {
                results[i].push_back(string(1, c) + to_string(row));
            }
        }
    }

    // Output results
    for (int i = 0; i < t; ++i) {
        for (const string& move : results[i]) {
            cout << move << endl;
        }
    }

    return 0;
}
