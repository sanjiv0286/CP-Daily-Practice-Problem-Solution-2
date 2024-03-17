// DATE: 10-02-2024
// TIME: 01-52-37
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
    // char ans = 'A' ^ 'B' ^ 'C' ^ '?';
    // for (int i = 0; i < 9; i++)
    // {
    //     char s;
    //     cin >> s;
    //     ans ^= s;
    // }
    // cout << ans << endl;
    unordered_map<char, int> m;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            m[s[i]]++;
        }
    }
    for (auto [x, y] : m)
    {
        if (y == 2)
        {
            cout << x << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
