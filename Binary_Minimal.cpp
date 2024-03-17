// DATE: 13-03-2024
// TIME: 20-20-26
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
    ll n, k;
    cin >> n >> k;
    // int arr[n];
    // forn(i, n)
    // {
    //     cin >> arr[i];
    // }

    string s;
    cin >> s;
    // getline(cin, s);
    // cin.ignore();
    // for (ll i = 0; i < k; i++)
    // {
    //     if (s[i] == '0')
    //     {
    //         s.erase(i, 1);
    //     }
    //     else
    //     {
    //         s[i] = '0';
    //     }
    // }
    // string res=s;
    // for (ll i = 0; i < n && k > 0; i++)
    // {
    //     if (s[i] == '0'|| (i==(n-1)))
    //     {
    //         res[i]='0';
    //         k--;
    //         // s.erase(i, 1);
    //         // --n;
    //         // --k;
    //         // --i;
    //     }
    // }

    // while (k--)
    // {
    //     s.push_back('0');
    // }

    // cout << res << endl;
    // cout << s << endl;

    int cnt = 0;
    for (char c : s)
    {
        if (c == '1')
            cnt++;
    }

    if (cnt > k)
    {
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1' && k > 0)
            {
                s[i] = '0';
                k--;
            }
        }
        cout << s << endl;
    }
    else
    {
        cout << string(n - k, '0') << endl;
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