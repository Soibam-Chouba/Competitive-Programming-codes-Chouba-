#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        long long n, m, r, c;
        cin >> n >> m >> r >> c; // Read n, m, r, c for each test case

        // The person who left is numbered (r - 1) * m + c
        long long left_person_number = (r - 1) * m + c;

        // The total number of people is n * m
        long long total_people = n * m;

        // Calculate the sum of Manhattan distances
        long long total_distance = 0;

        // Distance calculation for persons moving
        for (long long j = left_person_number + 1; j <= total_people; j++) {
            // The original position of person j (at (j-1))
            long long current_row = (j - 1) / m + 1; // Calculate the row
            long long current_col = (j - 1) % m + 1; // Calculate the column

            // The original position of person j-1
            long long previous_row = (j - 2) / m + 1; // Calculate the row of person j-1
            long long previous_col = (j - 2) % m + 1; // Calculate the column of person j-1

            // Calculate the Manhattan distance for person j moving to the previous position
            total_distance += abs(previous_row - current_row) + abs(previous_col - current_col);
        }

        cout << total_distance << '\n'; // Output the result for the current test case
    }

    return 0;
}
