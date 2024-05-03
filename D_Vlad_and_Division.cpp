// #include <iostream>
// #include <set>
// #include <vector>

// using namespace std;

// typedef long long int ll;

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     ll m = (1ll << 31) - 1;
//     ll tc;
//     cin >> tc;
//     while (tc--)
//     {
//         ll n;
//         cin >> n;
//         ll ans = n;
//         multiset<ll> ms;
//         for (ll i = 0; i < n; ++i)
//         {
//             ll x;
//             cin >> x;
//             if (ms.count(m ^ x))
//                 ms.erase(ms.find(m ^ x)), ans--;
//             else
//                 ms.insert(x);
//         }
//         cout << ans << '\n';
//     }
//     return 0;
// }
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); // for faster I/O
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases

    while (t--) {
        int n;
        cin >> n; // size of the sequence

        unordered_set<int> distinct_elements; // to store distinct elements

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x; // input each element

            // if the current element is not found in the set, insert it
            // otherwise, erase it since it forms a pair with a previous element
            if (distinct_elements.count(x ^ ((1 << 31) - 1)))
                distinct_elements.erase(x ^ ((1 << 31) - 1));
            else
                distinct_elements.insert(x);
        }

        cout << distinct_elements.size() << '\n'; // print the count of distinct elements
    }

    return 0;
}
