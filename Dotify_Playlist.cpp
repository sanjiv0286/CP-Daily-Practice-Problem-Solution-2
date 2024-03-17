

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, k, l;
    cin >> n >> k >> l;
    vector<pair<ll, ll>> v_p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v_p[i].first >> v_p[i].second;
    }
    // sort(v_p.rbegin(), v_p.rend());
    sort(v_p.begin(), v_p.end(), greater<pair<int, int>>());

    ll sum = 0;
    ll ct = 0;
    for (auto x : v_p)
    {
        if (x.second == l && ct < k)
        {
            ct++;
            sum += x.first;
        }
    }

    if (ct < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << sum << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
