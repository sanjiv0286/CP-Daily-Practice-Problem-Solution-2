// DATE: 19-08-2023
// TIME: 09-56-19
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

// void solve()
// {
//     ll n, i, j, k;
//     cin >> n;
//     vector<ll> v(n);
//     vin(v);
//     ll ans = 0, mx = 0;
//     for (ll i = 0; i < 2 * n; i++)
//     {
//         ll idx = i % n;
//         if (v[idx] == 1)
//             ans++;
//         else
//             ans = 0;
//         mx = max(mx, ans);
//     }
//     cout << mx << endl;

//     return;
// }

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
        }
        else
        {
            ans = max(cnt, ans);
            cnt = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
        {
            cnt++;
        }
        else
        {
            break;
        }
    }
    ans = max(cnt, ans);
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
