#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int station;
        cin >> station;
        v.push_back(station);
    }
    sort(v.begin(), v.end());

    int dif1 = v[0];
    int dif2 = x - v[n - 1];
    int maxi = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = v[i + 1] - v[i];
        maxi = max(diff, maxi);
    }

    int result;

    if (dif1 > maxi)
    {
        result = dif1;
    }
    else if (dif2 * 2 > maxi)
    {
        result = dif2 * 2;
    }
    else
    {
        result = maxi;
    }

    cout << result << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
