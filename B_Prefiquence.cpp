// #include <iostream>
// #include <string>

// using namespace std;

// int maxPrefixLength(string a, string b)
// {
//     int n = a.length();
//     int m = b.length();

//     return count;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//     }

//     return 0;
// }
// DATE: 02-05-2024
// TIME: 21-04-24
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()
#define input_int(a) \
    int a;           \
    cin >> a;
#define input_string(a) \
    string a;           \
    cin >> a
#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
//#define vin(v)        \
 //   for (auto &x : v) \
 //   cin >> x
#define vin(v, n)              \
    for (ll i = 0; i < n; i++) \
        int x;                 \
    cin >> x;                  \
    v.push_back(x);
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

void star()
{
    input_int(n);
    input_int(m);
    input_string(a);
    input_string(b);

    int i = 0, j = 0, ct = 0;

    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            ct++;
            i++;
        }
        j++;
    }
    cout << ct << endl;
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
        star();
    }
    return 0;
}
