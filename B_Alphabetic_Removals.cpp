
// // DATE: 22-03-2024
// // TIME: 00-09-17
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
//     ll n, k;
//     cin >> n >> k;
//     string s;
//     cin >> s;
//     // unordered_map<char,int>m;
//     vector<ll> count(26, 0);
//     for (auto &x : s)
//     {
//         count[x - 'a']++;
//     }
//     for (char i = 'a'; i < 'z'; i++)
//     {
//         while (k > 0 && count[i - 'a'] > 0)
//         {
//             ll pos = s.find(i);
//             if (pos != string::npos)
//             {
//                 s.erase(pos, 1);
//                 --count[i - 'a'];
//                 --k;
//             }
//         }
//     }
//     print(s);
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t = 1;
//     // cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;

string remove_letters(int n, int k, const string &s)
{
    vector<int> freq(26, 0);
    for (char c : s)
    {
        freq[c - 'a']++;
    }

    vector<int> prefix_sum(27, 0);
    for (int i = 0; i < 26; ++i)
    {
        prefix_sum[i + 1] = prefix_sum[i] + freq[i];
    }

    string result;
    for (int i = 0; i < 26; ++i)
    {
        if (k <= 0)
        {
            break;
        }
        if (prefix_sum[i + 1] >= k)
        {
            int char_to_remove = min(k, prefix_sum[i + 1] - prefix_sum[i]);
            result += string(char_to_remove, 'a' + i);
            k -= char_to_remove;
        }
        else
        {
            result += string(freq[i], 'a' + i);
            k -= freq[i];
        }
    }

    return result;
}

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    cout << remove_letters(n, k, s) << endl;

    return 0;
}
