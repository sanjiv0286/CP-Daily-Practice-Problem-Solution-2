#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int x = n * a;
    int y = (n / m) * b + min((n % m) * a, b);
    int ans = min(x, y);
    cout << ans << endl;
}