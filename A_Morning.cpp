// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// // Function to solve the problem
// void solve()
// {
//     // int mn = INT_MAX;  // Initialize mn with the maximum integer value
//     // int mx = INT_MIN;  // Initialize mx with the minimum integer value
//     // bool b1 = true;    // Initialize b1 as true
//     // bool b0 = false;   // Initialize b0 as false
//     // unordered_map<int, int> cnt; // Initialize an unordered map to store counts
    
//     string s;
//     cin >> s;  // Read input as a string

//     int as = 0;  // Initialize as to 0
//     int previous_digit = 1; // Initialize previous_digit to 1

//     // Loop through each character in the string
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] != '0')
//         {
//             int current_digit = int(s[i]) - 48;  // Convert character to integer
//             as += abs(current_digit - previous_digit) + 1; // Update as based on the absolute difference
//             previous_digit = current_digit; // Update previous_digit
//         }
//         else
//         {
//             as += abs(10 - previous_digit) + 1; // Handle '0' character case
//             previous_digit = 10; // Update previous_digit to 10
//         }
//     }

//     cout << as<<endl;  // Output the final result
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//     solve(); // Call the solve function to execute the code
//     }
//     return 0; // Return 0 to indicate successful execution
// }



//DATE: 22-10-2023
//TIME: 20-00-54 
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
    string s;
    cin>>s;
    int ans =0;
    int upd = 1;
    for(int i=0;i<s.size();i++){
        if(s[i]!=0){
            int currd = 

        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t;// = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
