#include <iostream>
#include <string>
using namespace std;

// Function to check if a substring is non-decreasing
bool isNonDecreasing(const string& substr) {
    for (int i = 1; i < substr.size(); ++i) {
        if (substr[i] < substr[i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to find the maximum length of a non-decreasing substring
int maxNonDecreasingSubstringLength(int N, const string& S) {
    int maxLength = 0;
    // Iterate through all substrings and check if they are non-decreasing
    for (int i = 0; i < N; ++i) {
        for (int j = i; j < N; ++j) {
            string substr = S.substr(i, j - i + 1);
            if (isNonDecreasing(substr)) {
                maxLength = max(maxLength, j - i + 1);
            }
        }
    }
    return maxLength;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string S;
        cin >> S;
        cout << maxNonDecreasingSubstringLength(N, S) << endl;
    }
    return 0;
}
