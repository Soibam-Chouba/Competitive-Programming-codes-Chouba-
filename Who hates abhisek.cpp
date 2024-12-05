#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // If n is odd, print -1 since a wahiyat permutation cannot exist
    //permutation er akar n kokhono odd hote pare na!
    if (n % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    // Generate the wahiyat permutation by swapping adjacent pairs
    vector<int> permutation(n);
    for (int i = 0; i < n; i += 2) {
        permutation[i] = i + 2;   // a[i] should be i + 2
        permutation[i + 1] = i + 1; // a[i + 1] should be i + 1
    }

    // Output the permutation
    for (int i = 0; i < n; ++i) {
        cout << permutation[i] << " ";
    }
    cout << endl;

    return 0;
}
/*
### Explanation
1. We first check if \( n \) is odd. If it is, we immediately print `-1` since
 it's impossible to create a wahiyat permutation.
2. For even \( n \), we create the permutation by filling an array. In each
 iteration of the loop, we set:
   - `permutation[i]` to `i + 2`
   - `permutation[i + 1]` to `i + 1`
3. Finally, we print the constructed permutation.

This way, we ensure the conditions of a wahiyat permutation are satisfied
 efficiently.*/
