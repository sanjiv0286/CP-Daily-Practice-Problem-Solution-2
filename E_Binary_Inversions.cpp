// DATE: 15-03-2024
// TIME: 15-33-08
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
ll cal(vector<ll> a)
{
    ll zero = 0;
    ll ans = 0;
    ll n = a.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 0)
            zero++;
        else
        {
            ans += zero;
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    ll ans1 = cal(a);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans1 = max(ans1, cal(a));
            a[i] = 0;
            break;
        }
    }
    ll ans2 = cal(a);
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans2 = max(ans2, cal(a));
            a[i] = 1;
            break;
        }
    }
    ll ans = max(ans1, ans2);
    cout << ans << endl;
    // int arr[n];
    // forn(i, n)
    // {
    //     cin >> arr[i];
    // }

    // string s;
    // cin>>s;
    // getline(cin, s);
    // cin.ignore();
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
