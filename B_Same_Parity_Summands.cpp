// // DATE: 12-03-2024
// // TIME: 22-09-09
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
//     int a = n / k;
//     int b = (n / k) + (n % k);
//     if (n < k)
//     {
//         print("NO");
//     }
//     else if ((a % 2 == 0 && b % k == 0) || ((a % 2 != 0 && b % k != 0)))
//     {
//         print("YES");
//     }
//     else
//     {
//         int c = a * k;
//         if ((c % 2 == 0 && b % 2 == 0) || ((c % 2 != 0 && b % 2 != 0)))
//         {
//             print("YES");
//         }
//         else// if ((c % 2 != 0 && b % 2 == 0) || ((c % 2 == 0 && b % 2 != 0)))
//         {
//             print("NO");
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
#include <iostream>
using namespace std;
#define ll long long int
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a = n / k;
    ll b = (n / k) + (n % k);
    if (n < k)
    {
        cout << "NO" << endl;
    }
    else if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 != 0))
    {
        cout << "YES" << endl;
        for (int i = 1; i < k ; i++){
            cout << a << " ";

        }
        cout << b << endl;
    }
    else
    {
        ll c = a * k;
        if ((c % 2 == 0 && b % 2 == 0) || (c % 2 != 0 && b % 2 != 0))
        {
            cout << "YES" << endl;
            for (int i = 1; i < k ; i++)
                cout << a << " ";
            cout << b << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
