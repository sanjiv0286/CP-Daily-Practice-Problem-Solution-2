#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define input_int(a) \
    int a;           \
    cin >> a;
#define vect(type1, name) vector<type1> name
#define vin(v, n)              \
    for (ll i = 0; i < n; i++) \
    {                          \
        int x;                 \
        cin >> x;              \
        v.push_back(x);        \
    }
#define print(x) cout << x << "\n"

void solve()
{
    input_int(n);
    vect(int, v);
    vin(v, n);

    if (n == 1)
    {
        print("YES");
        return;
    }

    if (v[0] != v[n - 1])
    {
        print("NO");
        return;
    }

    // Check if any element is smaller than the first (and last) element
    for (int i = 0; i < n; i++)
    {
        if (v[i] < v[0])
        {
            print("NO");
            return;
        }
    }
    // If the program reaches here, it means all elements are >= v[0] and can be made equal
    print("YES");
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
        solve();
    }
    return 0;
}
