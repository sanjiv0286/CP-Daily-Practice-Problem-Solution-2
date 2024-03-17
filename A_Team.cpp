#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ct = 0;
    while (n--)
    {
        vector<int> v(3);
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if (sum >= 2)
        {
            ct++;
        }
    }
    cout << ct;

    return 0;
}