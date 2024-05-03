// // DATE: 24-03-2024
// // TIME: 23-55-01
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
//     int n, k;
//     cin >> n >> k;
//     vector<int> v;
//     forn(i, n)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int mini = INT_MAX;
//     ll ct = 0;
//     if (k == 2 || k == 3 || k == 5)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int val = v[i] % k;
//             if (val == 0)
//             {
//                 print(0);
//                 return;
//             }
//             mini = min(mini, k - val);
//         }
//         print(mini);
//         return;
//     }

//     else
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int val = v[i] % k;
//             if (val == 0)
//             {
//                 print(0);
//                 return;
//             }
//             if (v[i] % 2 == 0)
//             {
//                 ct++;
//             }
//         }
//         if (ct >= 2)
//         {
//             print(0);
//             return;
//         }
//         else
//         {
//             print(2 - ct);
//             return;
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
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
    int n, k;
    cin >> n >> k;
    vector<int> v;
    forn(i, n)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int mini = INT_MAX;
    int ct = 0;
    if (k == 2 || k == 3 || k == 5)
    {
        for (int i = 0; i < n; i++)
        {
            int val = v[i] % k;
            if (val == 0)
            {
                print(0);
                return;
            }
            mini = min(mini, k - val);
        }
        print(mini);
        return;
    }

    else
    {
        for (int i = 0; i < n; i++)
        {
            int val = v[i] % k;
            if (val == 0)
            {
                print(0);
                return;
            }
            if (v[i] % 2 == 0)
            {
                ct++;
                if (ct >= 2) // Corrected here
                    break;
            }
        }
        // print("x");
        if (ct == 2)
        {
            print(0);
            return;
        }
        else
        {
            int ans = max(0,2 - ct);
            print(ans);
            return;
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
