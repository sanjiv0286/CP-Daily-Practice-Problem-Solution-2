#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while (test--)
    {
        int x, y;
        cin >> x >> y;
        int x1 = x;
        int y1 = y;

        vector<int> X;
        vector<int> Y;

        while (x >= 1)
        {
            X.push_back(x % 10);
            x /= 10;
        }
        while (y >= 1)
        {
            Y.push_back(y % 10);
            y /= 10;
        }
        int n = X.size();
        reverse(X.begin(), X.end());
        reverse(Y.begin(), Y.end());

        int idx = 0;
        while (X[idx] == Y[idx])
        {
            idx++;
        }
        int big = X[idx] > Y[idx] ? 0 : 1;
        for (int i = idx + 1; i < n; i++)
        {
            if (big == 0)
            {
                if (X[i] > Y[i])
                {

                    int temp = X[i];
                    X[i] = Y[i];
                    Y[i] = temp;
                }
            }
            else if (big == 1)
            {
                if (X[i] < Y[i])
                {
                    int temp = X[i];
                    X[i] = Y[i];
                    Y[i] = temp;
                }
            }
        }
        // for(auto it:X){cout<<it<<" ";}
        // cout<<endl;
        // for(auto it:Y){cout<<it<<" ";}
        // cout<<endl;
        int newx = 0;
        int newy = 0;
        int m = pow(10, n - 1);
        // cout<<"M: "<<m<<endl;
        for (int i = 0; i < n; i++)
        {
            newx += m * X[i];
            newy += m * Y[i];
            m /= 10;
        }
        cout << newx << endl;
        cout << newy << endl;
    }
    return 0;
}
