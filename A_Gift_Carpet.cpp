#include <iostream>
#include <string>
using namespace std;

bool isVikaLikeCarpet(string carpet)
{
    string name = "Vika";
    int idx = 0;
    for (char c : carpet)
    {
        if (c == name[idx])
        {
            idx++;
            if (idx == name.length())
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
        string carpet;
        cin >> carpet;

        if (isVikaLikeCarpet(carpet))
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}