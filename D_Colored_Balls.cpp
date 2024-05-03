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

const int N = 5050;
const int MOD = 998244353;

int a[N], sum[N] = {1};

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    int ans = 0;
    for (int i = 1, x; i <= n; i++)
    {
        x = a[i];
        for (int j = 0; j <= x; j++)
            ans = (ans + (long long)sum[j] * x) % MOD;
        for (int j = x + 1; j < N; j++)
            ans = (ans + (long long)sum[j] * ((j + x + 1) / 2)) % MOD;
        for (int j = N - 1; j >= 0; j--)
            if (j >= x)
                sum[j] = (sum[j] + sum[j - x]) % MOD;
    }
    cout << ans << endl;
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
