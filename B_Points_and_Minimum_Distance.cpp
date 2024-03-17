// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> v(2 * n);
//         for (int i = 0; i < 2 * n; i++)
//         {
//             cin >> v[i];
//         }
//         sort(v.begin(), v.end());
//         // ************** Keep in mind this mistake ************************
//         ll maxi1 = max(v.begin(), v.begin() + n);
//         ll mini1 = min(v.begin(), v.begin() + n);
//         ll maxi2 = max(v.begin() + n, v.end());
//         ll mini2 = min(v.begin() + n, v.end());
//         // ************** Keep in mind this mistake ************************
//         ll ans = abs(maxi1 - mini1) + abs(maxi2 - mini2);
//         cout << ans << endl;
//         for (int i = 0; i < n; i++)
//         {
//             cout << v[i] << " " << v[i + n] << endl;
//         }
//     }
//     return 0;
// }
// ? ************************************************************************
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll maxi1 = *max_element(v.begin(), v.begin() + n);
        ll mini1 = *min_element(v.begin(), v.begin() + n);
        ll maxi2 = *max_element(v.begin() + n, v.end());
        ll mini2 = *min_element(v.begin() + n, v.end());
        ll ans = abs(maxi1 - mini1) + abs(maxi2 - mini2);
        cout << ans << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " " << v[i + n] << endl;
        }
    }
    return 0;
}
