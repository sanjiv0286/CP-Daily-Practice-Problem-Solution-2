// DATE: 10-04-2024
// TIME: 21-51-35
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
    int n, s;
    cin >> n >> s;
    if (n == 1 || s == 0)
    {
        cout << -1 << '\n';
    }
    else if (n % 2 == 0)
    {
        if (s % 2 == 0)
        {
            if (s >= n)
            {
                int d = s / n;
                int r = s % n;
                for (int i = 0; i < n; i++)
                {
                    if (r)
                    {
                        cout << d + 1 << ' ';
                        r--;
                    }
                    else
                    {
                        cout << d << ' ';
                    }
                }
                cout << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        if (n > 3)
        {
            if (s >= n + 3)
            {
                cout << "1 2 3 ";
                n -= 3;
                s -= 6;
                int d = s / n;
                int r = s % n;
                for (int i = 0; i < n; i++)
                {
                    if (r)
                    {
                        cout << d + 1 << ' ';
                        r--;
                    }
                    else
                    {
                        cout << d << ' ';
                    }
                }
            }
            else
            {
                cout << -1 << '\n';
            }
        }
        else
        {
            if (s < 6 || s == (1 << (int)log2(s)))
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << s / 2 << ' ' << (1 << (int)log2(s)) << ' ' << (s / 2) - (1 << (int)log2(s)) << '\n';
            }
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
