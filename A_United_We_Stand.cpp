// // DATE: 12-08-2023
// // TIME: 20-31-27
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
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(v.begin(), v.end());
//     map<int, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[v[i]]++;
//     }
//     int c;
//     if (m.size() == 1)
//     {
//         cout << -1 << endl;
//         return;
//     }
//     else
//     {
//         auto it = m.begin();
//         c = (*it).second;
//         cout << c << " " << n - c << endl;
//         for (int i = 0; i < c; i++)
//         {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//         for (int i = c; i < n; i++)
//         {
//             cout << v[i] << " ";
//         }
//         cout << endl;
//     }
//     return;
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
// C++ implementation to convert
// a number m to n using minimum
// number of given operations
#include <bits/stdc++.h>
using namespace std;

// Function to find minimum
// number of given operations
// to convert m to n
int convert(int m, int n)
{
    if (m == n)
        return 0;

    // only way is to do
    // -1 (m - n) times
    if (m > n)
        return m - n;

    // not possible
    if (m <= 0 && n > 0)
        return -1;

    // n is greater and n is odd
    if (n % 2 == 1)

        // perform '-1' on m
        // (or +1 on n)
        return 1 + convert(m, n + 1);

    // n is even
    else
        // perform '*2' on m
        // (or n/2 on n)
        return 1 + convert(m, n / 2);
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x , y;
        cin>>x>>y;
        cout << "Minimum number of operations : "
         << convert(x, y)<<"\n";
    }
    int m = 1, n = 2;
    
    return 0;
}
