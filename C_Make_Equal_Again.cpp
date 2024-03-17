#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

#define G(x) \
    ll x;    \
    cin >> x;
#define GD(x) \
    ld x;     \
    cin >> x;
#define GS(s) \
    string s; \
    cin >> s;
#define F(i, I, r) for (ll i = I; i < r; ++i)
#define FD(i, r, I) for (ll i = r; i > I; --i)
#define A(a) (a).begin(), (a).end()
#define K first
#define V second

const ll M = 1000000007; // or 998244353, as per requirement

void solve()
{
    G(n)
    vl v(n);
    F(i, 0, n)
    cin >> v[i];

    ll l = 0, r = n - 1;
    while (v[l] == v[0])
        l++;
    while (v[r] == v[n - 1])
        r--;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (v[0] != v[n - 1])
        cout << min(n - l, r + 1) << endl;
    else
        cout << max(0ll, r - l + 1) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
