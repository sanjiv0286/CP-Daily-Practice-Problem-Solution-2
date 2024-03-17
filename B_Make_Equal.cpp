// #include <iostream>
// #include <vector>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair<ll, ll> pll;
// typedef vector<ll> vl;

// #define G(x) \
//     ll x;    \
//     cin >> x;
// #define GD(x) \
//     ld x;     \
//     cin >> x;
// #define GS(s) \
//     string s; \
//     cin >> s;
// #define F(i, I, r) for (ll i = I; i < r; ++i)
// #define FD(i, r, I) for (ll i = r; i > I; --i)
// #define A(a) (a).begin(), (a).end()
// #define K first
// #define V second

// const ll M = 1000000007; // or 998244353, as per requirement

// void solve()
// {
//     G(n)
//     vl v(n);
//     ll tot = 0;
//     F(i, 0, n)
//     {
//         cin >> v[i];
//         tot += v[i];
//     }

//     ll eq = tot / n;
//     F(i, 0, n)
//     {
//         if (v[i] >= eq)
//         {
//             ll tmp = v[i];
//             v[i] = eq;
//             if (i < n - 1)
//                 v[i + 1] += tmp - eq;
//         }
//         else
//         {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }

// DATE: 14-02-2024
// TIME: 02-11-21
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
    int n;
    cin >> n;
    vector<int> v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    int avg = sum / n;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < avg)
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            // int tmp = v[i];
            int dif = v[i] - avg;
            v[i] = avg;
            if (i < n - 1)
            {
                v[i + 1] += dif;
            }
        }
    }
    cout << "YES" << endl;
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
