#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int dkl1;
    cin >> dkl1;
    while (dkl1--)
    {
        int dkl2, dkl3;
        cin >> dkl2 >> dkl3;
        int dkl4[dkl3], dkl5[dkl3];
        for (int i = 0; i < dkl3; i++)
        {
            cin >> dkl4[i];
        }
        for (int i = 0; i < dkl3; i++)
        {
            cin >> dkl5[i];
        }
        if (dkl2 % 2 == 0)
        {
            vector<int> dkl6(dkl2 + 2, 0);
            for (int i = 0; i < dkl3; i++)
            {
                if (dkl4[i] < dkl5[i])
                {
                    dkl5[i] = min(dkl5[i], dkl4[i] + dkl2 / 2);
                }
                else
                {
                    int dkl7 = (dkl4[i] + (dkl2 / 2));
                    dkl5[i] = min(dkl5[i] + dkl2, dkl7);
                    dkl5[i] = dkl5[i] % dkl2;
                    if (dkl5[i] == 0)
                    {
                        dkl5[i] = dkl2;
                    }
                }
                if (dkl4[i] < dkl5[i])
                {
                    dkl6[dkl4[i]]++;
                    dkl6[dkl5[i]]--;
                }
                else
                {
                    dkl6[dkl4[i]]++;
                    dkl6[1]++;
                    dkl6[dkl5[i]]--;
                }
            }
            int dkl8 = 0;
            for (int i = 1; i < dkl2 + 2; i++)
            {
                dkl6[i] += dkl6[i - 1];
            }
            for (int i = 1; i <= dkl2 / 2; i++)
            {
                dkl8 = max(dkl8, dkl6[i] + dkl6[i + dkl2 / 2]);
            }
            cout << dkl8 << endl;
        }
        else
        {
            dkl2 = 2 * dkl2;
            vector<int> dkl6(dkl2 + 2, 0);
            for (int i = 0; i < dkl3; i++)
            {
                dkl4[i] = 2 * dkl4[i] - 1;
                dkl5[i] = 2 * dkl5[i] - 1;
                if (dkl4[i] < dkl5[i])
                {
                    dkl5[i] = min(dkl5[i], dkl4[i] + dkl2 / 2);
                }
                else
                {
                    int dkl7 = (dkl4[i] + (dkl2 / 2));
                    dkl5[i] = min(dkl5[i] + dkl2, dkl7);
                    dkl5[i] = dkl5[i] % dkl2;
                    if (dkl5[i] == 0)
                    {
                        dkl5[i] = dkl2;
                    }
                }
                if (dkl4[i] < dkl5[i])
                {
                    dkl6[dkl4[i]]++;
                    dkl6[dkl5[i]]--;
                }
                else
                {
                    dkl6[dkl4[i]]++;
                    dkl6[1]++;
                    dkl6[dkl5[i]]--;
                }
            }
            int dkl8 = 0;
            for (int i = 1; i < dkl2 + 2; i++)
            {
                dkl6[i] += dkl6[i - 1];
            }
            for (int i = 1; i <= dkl2 / 2; i++)
            {
                dkl8 = max(dkl8, dkl6[i] + dkl6[i + dkl2 / 2]);
            }
            cout << dkl8 << endl;
        }
    }
}
