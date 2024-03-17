// // DATE: 16-08-2023
// // TIME: 00-11-51
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long


// void solve()
// {
//     ll n, k;
//     cin >> n >> k;
//     vector<ll> v;
//     for (ll i = 1; i <= n; i += 2)
//     {
//         v.push_back(i);
//     }
//     for (ll i = 2; i <= n; i += 2)
//     {
//         v.push_back(i);
//     }
//     cout << v[k - 1];
// }
// ll main()
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
// *******************************************
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    ll k;
    cin>>n>>k;
    ll no_of_odd = (n+1)/2;
    ll no_of_even = n/2;

    if(k<= no_of_odd){
        cout<<2*k-1;
    }
    else{
        cout<<2*(k-no_of_odd);
    }

}