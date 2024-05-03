#include <iostream>
#include <string>
using namespace std;

void solve() {
    string a1, b1;
    cin >> a1 >> b1;
    
    if (a1 < b1) {
        swap(a1, b1);
    }
    
    bool yes = false;
    for (int i = 0; i < a1.size(); i++) {
        if (a1[i] > b1[i] && yes) {
            swap(a1[i], b1[i]);
        }
        if (a1[i] != b1[i]) {
            yes = true;
        }
    }
    
    cout << a1 << '\n';
    cout << b1 << '\n';
}

int main() {
    solve();
    return 0;
}
