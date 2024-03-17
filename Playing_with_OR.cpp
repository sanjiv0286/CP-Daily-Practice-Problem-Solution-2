#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int count = 0;
        for (int i = 0; i <= n - k; i++)
        {
            bool oddFound = false;
            for (int j = 0; j < k; j++)
            {
                if (a[i + j] % 2 == 1)
                {
                    oddFound = true;
                    break;
                }
            }
            if (oddFound)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}
