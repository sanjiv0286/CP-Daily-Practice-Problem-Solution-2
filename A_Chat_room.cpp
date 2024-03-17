// // DATE: 07-08-2023
// // TIME: 12-36-45
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

//     string s;
//     cin >> s;
//     char m[5];
//     m[0] = 'h';
//     m[1] = 'e';
//     m[2] = 'l';
//     m[3] = 'l';
//     m[4] = 'o';

//     int a = 0;

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (m[a] == x)
//         {
//             a++;
//         }
//     }
//     if (a == 5)
//         cout << "YES";
//     else
//         cout << "NO";
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }
// // *****************************************************************************

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//        string s;
//        cin>>s;
//        string check = "hello";
//        int j =0;int ans =0;
//        for(int i =0;i<s.size();i++){
//               if(x==check[j]){
//                      j++;
//                      ans++;
//               }
//        }
//        if(ans ==5){
//               cout<<"YES"<<"\n";

//        }
//        else{
//               cout<<"NO";
//        }
// }

// *********************************

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int flag = 0;
    string ans = "NO";
    for (auto x : s)
    {
        if (x == 'h' && flag == 0)
        {
            // ans += 'h';
            flag = 1;
            //  continue;
        }
        if (x == 'e' && flag == 1)
        {
            // ans += 'e';
            flag = 2;
             //continue;
        }
        if (x == 'l' && flag == 2)
        {
            // ans += 'l';
            flag = 3;
            continue;
        }
        if (x == 'l' && flag == 3)
        {
            // ans += 'l';
            flag = 4;
            
        }
        if (x == 'o' && flag == 4)
        {
            ans = "YES";
            flag = 5;
        }
      
    }
    cout << ans;
}