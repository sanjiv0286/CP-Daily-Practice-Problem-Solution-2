// DATE: 04-04-2024
// TIME: 14-41-29
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
#define vin(v, size)           \
    for (int i = 0; i < n; i++) \
    {                          \
        int x;                 \
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

void solve()
{
    int n;
    cin >> n;
    vect(int, a);
    vin(a, n);
    vect(int, b) = a;
    sort(all(b));
    if (b == a)
    {
        print("Yes");
        // continue;/
        return;
    }
    int add = INT_MIN;
    vect(int, ind);
    for (int i = 1; i < n;)
    {
        if (a[i] < a[i - 1])
        {
            add = max(add, a[i-1] - a[i]);
            ind.push_back(i);
            i += 2;
        }
        else{
            i++;
        }
    }
    for (int i = 0; i < ind.size(); i++)
    {
        a[ind[i]] += add;
    }
    vect(int, c) = a;
    sort(all(c));
    if (a == c)
    {
        print("Yes");
    }
    else
    {
        print("NO");
    }

    // vout(v);
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
