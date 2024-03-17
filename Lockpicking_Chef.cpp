

// DATE: 20-09-2023
// TIME: 21-08-11
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;

    int min_moves = INT_MAX;

    for (int i = 0; i <= n - m; i++)
    {
        int moves = 0;
        for (int j = 0; j < m; j++)
        {
            int diff = abs(s[i + j] - k[j]);
            moves += min(diff, 10 - diff);
        }
        min_moves = min(min_moves, moves);
    }
    cout << min_moves << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t; // = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
