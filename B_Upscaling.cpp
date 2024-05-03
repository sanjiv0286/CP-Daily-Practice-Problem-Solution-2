#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 0; i < 2 * n; ++i) {
            string row = "";
            for (int j = 0; j < 2 * n; ++j) {
                if ((i + j) % 2 == 0) {
                    row += "#";
                } else {
                    row += ".";
                }
            }
            cout << row << endl;
        }
    }

    return 0;
}
