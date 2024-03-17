#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo                      \
    for (int i = 0; i < n; ++i) \
    {                           \
        cin >> v[i];            \
    }
#define rep(i, a, b) for (int i = a; i < b; i++)
#define vout(a, b, v)           \
    for (int i = a; i < b; i++) \
    {                           \
        cout << v[i] << " ";    \
    }                           \
    cout << "\n";
#define pb push_back
#define full(x) x.begin(), x.end()
#define Pi 3.1415926535897932382626
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>

void solve()
{
    ll n;
    cin >> n;
    string s, ans = "YES";
    vl v(n);
    fo;
    if (n % 2 == 0)
    {
        cout << 2 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n << "\n";
    }
    else
    {
        cout << 4 << "\n";
        cout << 1 << " " << n << "\n";
        cout << 1 << " " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << n - 1 << " " << n << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}