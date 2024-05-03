// DATE: 23-03-2024
// TIME: 08-08-34
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

const ll M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

// ll powe(ll n, ll k)
// {

//     long long temp;
//     if (k == 0)
//         return 1;
//     temp = powe(2, k / 2) % M;
//     //   long long temp1 =power(x,y-1);
//     temp = (temp * temp) % M;
//     if (k % 2 == 0)
//         return temp;
//     else
//         return (2 * temp) % M;
// }
ll powe(ll n, ll k)
{
    if (k == 0)
        return 1;

    ll temp = powe(n, k / 2) % M;
    temp = (temp * temp) % M;

    if (k % 2 == 0)
        return temp;
    else
        return (n * temp) % M;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    ll ts = 0;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        ts += x;
    }
    // if (n == 1 && v[0] >= 0)
    // {
    //     int ans = ts - v[0] + powe(2, k) * v[0];
    //     print(ans);
    //     return;
    // }
    // else if (v[0] < 0 && n == 1)
    // {
    //     print(v[0]);
    //     return;
    // }
    if (n == 1)
    {
        ll ans = (ts + v[0] * (powe(2, k) - 1)) % M;
        print(ans);
        return;
    }
    ll sum = 0;
    ll curr_sum = v[0];
    for (ll i = 1; i < n; i++)
    {
        curr_sum = max(v[i], curr_sum + v[i]);
        sum = max(sum, curr_sum);
    }
    ll x = sum;
    ll power = powe(2, k);
    // ll ans = ((ts % M+M) - (x % M) + ((power % M) * (x % M)) % M + M) % M;
    // ll ans = ((ts % M + M) % M + ((power - 1)%M * (x)) % M) % M;

    ll ans = (ts % M + M) % M;
    ans = (ans + (x * (power - 1) % M)) % M;

    print(ans);
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
