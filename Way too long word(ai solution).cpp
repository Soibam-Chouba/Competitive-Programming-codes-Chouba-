#include <iostream>
#include <string>

using namespace std;

string abbreviate(const string& word) {
    int length = word.length();
    if (length > 10) {
        return string(1, word[0]) + to_string(length - 2) + string(1, word[length - 1]);
    }
    return word;
}

int main() {
    int n;
    cin >> n;  // Read number of words
    cin.ignore();  // Ignore the newline after the integer input

    for (int i = 0; i < n; ++i) {
        string word;
        getline(cin, word);  // Read the word
        cout << abbreviate(word) << endl;  // Output the result of abbreviation
    }

    return 0;
}
