#include <iostream>
#include <vector>
#include <map>
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
    G(x) G(y)
        vl v(n);
    map<ll, map<ll, ll>> mp; // corrected map template parameters
    F(i, 0, n)
    {
        cin >> v[i];
        mp[v[i] % x][v[i] % y]++;
    }
    ll tot = 0;                     // corrected Il to ll
    auto cmp = [&](ll val) {        // corrected Int to ll
        return (x - (val % x)) % x; // corrected return statement
    };
    for (auto i : v)
        tot += mp[cmp(i)][i % y] - (i % x == cmp(i)); // corrected auto loop syntax and added parentheses for better readability
    cout << (tot / 2) << endl;
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
