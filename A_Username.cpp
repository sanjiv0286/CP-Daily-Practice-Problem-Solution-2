#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Find the position of the first digit in the string
        size_t pos = s.find_first_of("0123456789");

        // Extract the substring before the first digit
        string username = s.substr(0, pos);

        cout << username << endl;
    }

    return 0;
}
