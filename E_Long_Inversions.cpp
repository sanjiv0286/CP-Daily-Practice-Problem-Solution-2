

#include <bits/stdc++.h>
using namespace std;

bool long_inv(vector<int> &a, int k)
{
    int n = a.size();
    vector<int> tmp(n, 0);
    for (int i = 0; i <= n - k; i++)
    {
        int cur = a[i];
        int ops = 0;
        if (i > 0)
        {
            ops += tmp[i - 1];
        }
        int idx = max(0, i - k + 1);
        if (idx > 0)
        {
            ops -= tmp[idx - 1];
        }
        if (ops % 2)
        {
            cur = 1 - cur;
        }
        if (i > 0)
        {
            tmp[i] = tmp[i - 1];
        }
        if (cur == 0)
        {
            tmp[i]++;
        }
    }
    for (int i = n - k + 1; i < n; i++)
    {
        tmp[i] = tmp[i - 1];
        int cur = a[i];
        int ops = tmp[i - 1];
        int idx = max(0, i - k + 1);
        if (idx > 0)
        {
            ops -= tmp[idx - 1];
        }
        if (ops % 2)
        {
            cur = 1 - cur;
        }
        if (cur == 0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n, 0);
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            a[i] = 1;
        }
    }
    for (int k = n; k >= 1; k--)
    {
        if (long_inv(a, k))
        {
            cout << k << endl;
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
