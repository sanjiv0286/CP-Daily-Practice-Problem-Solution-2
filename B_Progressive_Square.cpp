//DATE: 08-04-2024
//TIME: 21-05-52 
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


void solved() {
    int n, c, d;
    cin >> n >> c >> d;

    unordered_map<int, int> mp;
    unordered_map<int, int> mp2;
    int a = INT_MAX;

    for (int i = 0; i < n * n; i++) {
        int x;
        cin >> x;
        a = min(a, x);
        mp[x]++;
    }

    vector<vector<int>> v(n, vector<int>(n));

    v[0][0] = a;
    mp2[v[0][0]]++;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            v[i][j] = v[i][j - 1] + c;
            mp2[v[i][j]]++;
        }
        if (i + 1 < n) {
            v[i + 1][0] = v[i][0] + d;
            mp2[v[i + 1][0]]++;
        }
    }

    if (mp.size() != mp2.size() || any_of(mp.begin(), mp.end(), [&](const pair<int, int>& kv) {
        return !mp2.count(kv.first) || mp2[kv.first] != kv.second;
    })) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
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
        solved();
    }
    return 0;
}
