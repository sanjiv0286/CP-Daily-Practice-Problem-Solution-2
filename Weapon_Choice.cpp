// // // DATE: 17-01-2024
// // // TIME: 20-11-48
// // #include <bits/stdc++.h>
// // #include <unordered_set>
// // using namespace std;

// // #define ll long long
// // #define all(a) a.begin(), a.end()
// // #define print(x) cout << x << '\n'

// // void solve()
// // {
// // ll h, x, y1, y2, k;
// // cin >> h >> x >> y1 >> y2 >> k;
// // ll val1 = ceil((double)h / x);

// // ll ct = 0;
// // for (int i = 1; i <= k; i++)
// // {
// //     h = h - y1;
// //     ct++;
// //     if (h <= 0)
// //     {
// //         break;
// //     }
// // }
// // while (h > 0)
// // {
// //     ct++;
// //     h = h - y2;
// //     if (y2 >= y1)
// //     {
// //         break;
// //     }
// // }

// // ll ans = min(ct, val1);
// // // cout << ans << endl;
// // print(ans);
// // }

// // int main()
// // {
// //     ios_base::sync_with_stdio(0);
// //     cin.tie(0);
// //     cout.tie(NULL);
// //     ll t; //= 1;
// //     cin >> t;
// //     while (t--)
// //     {
// //         solve();
// //     }
// //     return 0;
// // }
// // DATE: 17-01-2024
// // TIME: 21-49-12
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
//     ll h, x, y1, y2, k;
//     cin >> h >> x >> y1 >> y2 >> k;
//     ll val1; //= ceil((double)h / x);
//     if (h % x == 0)
//     {
//         val1 = h / x;
//     }
//     else
//     {
//         val1 = h / x + 1;
//     }
//     ll ct = 0;

//     if (h < y1)
//     {
//         ct = 1;
//     }
//     else
//     {
//         ct = 0;
//     }
//     int a = (h % y1 == 0) ? (h / y1) : (h / y1) + 1;
//     if (a > k)
//     {
//         int b = a - k;
//         ct = k;
//         h = h - (y1 * k);
//         ct += h % y2 == 0 ? (h / y2) : (h / y2) + 1;
//     }
//     else
//     {
//         ct = a;
//     }
//     ll ans = min(ct, val1);
//     cout << ans << endl;
//     // print(ans);
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t; // = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


//DATE: 18-01-2024
//TIME: 00-28-44 
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
    int h, x, y1, y2, k;
    cin >> h >> x >> y1 >> y2 >>k;

    int res = (h + x - 1)/x;
    int a;
    if(k*y1 >= h){
        a = (h+y1-1)/y1;
        // a = ceil(h/x);
    }
    else{
        a = k;
        h -= k*y1;
        a += (h + y2 - 1)/y2;
    }

    cout << min(res, a) << endl;
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
