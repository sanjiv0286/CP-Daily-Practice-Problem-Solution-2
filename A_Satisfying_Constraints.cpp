// // DATE: 13-01-2024
// // TIME: 20-23-46
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long
// #define all(a) a.begin(), a.end()

// #define forn(i, n) for (int i = 0; i < n; i++)
// #define rep(i, a, b) for (int i = a; i <= b; i++)
// #define dep(i, b, a) for (int i = b; i >= a; i--)

// #define print(x) cout << x << "\n"
// #define vin(v)        \
//     for (auto &x : v) \
//     cin >> x
// // #define vin() for(ll i=0;i<n;i++) cin>>v[i]
// #define vout(v)           \
//     for (auto x : v)      \
//         cout << x << " "; \
//     cout << endl
// // #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// // #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
// #define vect(type1, name) vector<type1> name
// #define vectp(type1, type2, name) vector<pair<type1, type2>> name
// #define set(type, name) set<type> name
// #define mpp(type1, type2, name) map<type1, type2> name

// const int M = 1e9 + 7;
// const int N = 1e5 + 7;
// #define Pi 3.1415926535897932384626
// // extern int x;

// void solve()
// {
//     int n;
//     cin >> n;
//     int res = 0;
//     int max1 = INT_MIN, min1 = INT_MAX - 1;
//     int ct = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int a, x;
//         cin >> a >> x;

//         if (a == 1)
//         {
//             max1 = max(x, max1);
//         }
//         if (a == 2)
//         {
//             min1 = min(min1, x);
//         }

//         if (a == 3 && (x >= max1 && x <= min1))
//         {
//             ct++;
//         }
//     }
//     res = abs(min1 - max1) + 1 - ct;
//     cout << res << endl;
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int n;
    cin >> n;
    int res = 0;
    int max1 = INT_MIN, min1 = INT_MAX;
    int ct = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a, x;
        cin >> a >> x;

        if (a == 1)
        {
            max1 = max(x, max1);
        }
        else if (a == 2)
        {
            min1 = min(x, min1);
        }

        else if (a == 3)
        {
            v.push_back(x);
        }
    }
    res = abs(min1 - max1) + 1;

    for (auto &x : v)
    {
        if (x >= max1 && x <= min1)
        {
            res--;
        }
    }
    if (min1 < max1)
    {
        cout << 0 << endl;
    }
    else
    {

        cout << res << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
