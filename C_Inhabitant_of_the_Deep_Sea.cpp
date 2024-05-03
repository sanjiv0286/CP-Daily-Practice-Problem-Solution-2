#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, h = n - 1;
    int ans = 0;
    bool f = true;
    while (l <= h)
    {
        if (l == h)
        {
            if (k >= a[l])
            {
                ans++;
                break;
            }
        }
        if (f)
        {
            if (a[l] <= a[h])
            {
                if (k >= (2 * a[l] - 1))
                {
                    ans++;
                    k -= (2 * a[l] - 1);
                    a[h] -= (a[l] - 1);
                    l++;
                    f = false;
                }
                else
                    break;
            }
            else
            {
                if (k >= (2 * a[h]))
                {
                    ans++;
                    k -= 2 * a[h];
                    a[l] -= a[h];
                    h--;
                }
                else
                    break;
            }
        }
        else
        {
            if (a[h] <= a[l])
            {
                if (k >= (2 * a[h] - 1))
                {
                    ans++;
                    k -= (2 * a[h] - 1);
                    a[l] -= (a[h] - 1);
                    h--;
                    f = true;
                }
                else
                    break;
            }
            else
            {
                if (k >= (2 * a[l]))
                {
                    ans++;
                    k -= 2 * a[l];
                    a[h] -= a[l];
                    l++;
                }
                else
                    break;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
