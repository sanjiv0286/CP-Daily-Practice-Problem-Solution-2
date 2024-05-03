#include <iostream>
#include <string>

using namespace std;

bool isBinaryDecimal(int n)
{
    string numStr = to_string(n);
    for (char digit : numStr)
    {
        if (digit != '0' && digit != '1')
        {
            return false;
        }
    }
    return true;
}

bool canBeProductOfBinaryDecimals(int n)
{
    if (n == 1)
        return true; // 1 is already a binary decimal
    for (int i = 1; i <= n; ++i)
    {
        if (n % i == 0)
        {
            int factor1 = i;
            int factor2 = n / i;
            if (isBinaryDecimal(factor1) && isBinaryDecimal(factor2))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (canBeProductOfBinaryDecimals(n))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
