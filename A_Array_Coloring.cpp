// // DATE: 07-08-2023
// // TIME: 20-12-44
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
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         sum = sum + v[i];
//     }
//     sort(v.begin(), v.end());
//     // for (int i = 0; i < n; i++)
//     // {
//     //     cout << v[i] << " ";
//     // }
//     int num = sum - v[0];
//     if ((num % 2 == 0 && v[0] % 2 == 0) || (num % 2 != 0 && v[0] % 2 != 0))
//     {
//         cout << "YES"
//              << "\n";
//     }
//     else
//     {
//         cout << "NO"
//              << "\n";
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);
//     ll t; //= 1;
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

char tolow(char x){
    if(x >= 'a' && x <= 'z') return x;
    return (char)(x - 'A' + 'a');
}

string getTown(vector<string> p){
    string ans = "";
    int j = 0;
    while(true){
        for(int i = 0; i < p.size(); i++){
            if(j >= p[i].size()) return ans;
            if(tolow(p[i][j]) !=  tolow(p[0][j]))  return ans;
        }
        ans += tolow(p[0][j]);
        j++;
    }

    return ans;
}

int main(){
    int n; cin >> n;
    vector<string>v;

    for(int i = 0; i < n; i++){
        string a; cin >> a;
        v.push_back(a);
    }

    cout << getTown(v) << endl;
}
