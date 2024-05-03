// DATE: 22-04-2024
// TIME: 00-29-50
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()
#define input_ll(a) \
    ll a;           \
    cin >> a;
#define input_string(a) \
    string a;           \
    cin >> a
#define forn(i, n) for (ll i = 0; i < n; i++)
#define rep(i, a, b) for (ll i = a; i <= b; i++)
#define dep(i, b, a) for (ll i = b; i >= a; i--)

#define print(x) cout << x << "\n"
//#define vin(v)        \
 //   for (auto &x : v) \
 //   cin >> x
#define vin(v, n)              \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }

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

void star()
{
    input_ll(n);
    vect(ll, v);
    vin(v, n);
    mpp(int, int, m);
    for (auto &x : v)
    {
        m[x]++;
    }
    ll ct = 0;
    for (auto &x : m)
    {
        if (x.second >= 3)
        {
            ct+= x.second/3;
        }
    }
    print(ct);
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
        star();
    }
    return 0;
}
