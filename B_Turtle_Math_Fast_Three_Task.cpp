// DATE: 18-03-2024
// TIME: 21-10-31
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
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
        if (x % 3 == 1)
        {
            flag = true;
        }
        v.push_back(x);
    }
    if (sum % 3 == 0)
    {
        print(0);
    }
    else if (sum % 3 == 2)
    {
        print(1);
    }
    else if (sum % 3 == 1)
    {
        // for (int &i : v)
        // {

        //     if (i % 3 == 1)
        //     {
        //         print(1);
        //         break;
        //     }
        // }

        // print(2);
        if (flag == true)
        {
            print(1);
        }
        else
        {
            print(2);
        }
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
