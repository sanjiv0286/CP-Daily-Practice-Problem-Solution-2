#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string res = "";
        int turn = 0;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            if (turn == '0')
            {
                if (s[l] == '0')
                {
                    res = '0' + res;
                }
                else
                {
                    res += '1';
                }
                l++;
            }
            else
            {
                if (s[r] == '1')
                {
                    res = '1' + res;
                }
                else
                {
                    res += '0';
                }
                r--;
            }
            turn = 1 ^ turn;
        }
        cout << res << endl;
    }
    return 0;
}
