// DATE: 10-04-2024
// TIME: 20-02-53
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
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1 += x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >>x;
        s2 += x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        s3 += x;
    }
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        s4 += x;
    }
    if (s1 > s3 && s2 > s4)
    {

        cout << "A" << endl;
    }
    else if (s1 < s3 && s2 < s4)
    {
        cout << "P" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
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
