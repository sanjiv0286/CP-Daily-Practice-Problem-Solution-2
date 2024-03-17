// DATE: 06-08-2023
// TIME: 22-45-43
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

void solve()
{
    string s, t;
    cin >> s >> t;

    int m = s.size();
    int n = t.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    // cout << s << " " << t << " ";

    if (s < t)
    {
        cout << "-1";
    }
    else if (s > t)
    {
        cout << "1";
    }

    else
    {
        cout << "0";
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);

    solve();

    return 0;
}
