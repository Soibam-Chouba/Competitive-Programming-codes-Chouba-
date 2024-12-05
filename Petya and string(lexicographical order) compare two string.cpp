#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
    string str1, str2;

    // Read the two strings
    getline(cin, str1);
    getline(cin, str2);

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the strings
    if (str1 < str2) {
        cout << "-1" <<endl; // str1 is less than str2
    } else if (str1 > str2) {
        cout << "1" << endl;  // str1 is greater than str2
    } else {
        cout << "0" << endl;  // str1 is equal to str2
    }

    return 0;
}
/*Explanation
Include Headers: The program includes <iostream>, <string>, and <algorithm> for
input/output, string manipulation, and the transformation function.

Input: It reads two strings using std::getline to ensure that it captures the
entire line, including spaces if any (although based on the problem, it’s
                                      guaranteed they will not have spaces).

Transform to Lowercase: The std::transform function is used to convert both
strings to lowercase. The ::tolower function is applied to each character.

Comparison: The program then compares the two strings lexicographically using
standard comparison operators (<, >, and ==).

Output: It prints -1, 1, or 0 based on the comparison results.*/
