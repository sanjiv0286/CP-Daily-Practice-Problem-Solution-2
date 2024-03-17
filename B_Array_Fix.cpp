// DATE: 15-03-2024
// TIME: 20-51-20
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

    string arr[n];

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        arr[i] = to_string(num);
    }

    string ans = "YES";
    int prev = 0;
    string first = arr[0];

    if (first.length() == 1)
    {
        prev = first[0] - '0';
    }
    else
    {
        int val1 = first[0] - '0';
        int val2 = first[1] - '0';

        if (val1 <= val2)
        {
            prev = val2;
        }
        else
            prev = stoi(first);
    }

    for (int i = 1; i < n; i++)
    {
        string s = arr[i];
        if (s.length() == 1)
        {
            int val = s[0] - '0';
            if (val < prev)
            {
                ans = "NO";
                break;
            }
            else
            {
                prev = val;
            }
        }
        else
        {
            int val1 = s[0] - '0';
            int val2 = s[1] - '0';
            int both = stoi(s);

            if (val1 <= val2)
            {
                if (prev <= val1)
                {
                    prev = val2;
                }
                else
                {
                    if (both >= prev)
                    {
                        prev = both;
                    }
                    else
                    {
                        ans = "NO";
                    }
                }
            }
            else
            {
                if (both >= prev)
                {
                    prev = both;
                }
                else
                {
                    ans = "NO";
                }
            }
        }
    }

    cout << ans << endl;
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
