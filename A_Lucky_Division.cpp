// ****************************************

// *Petya calls a number "almost lucky if it could be evenly divided by some lucky number,"
// *what it means is that if a number can be divided by a lucky number without leaving any remainder,
// * then Petya considers it to be "almost lucky."

// ****************************************


#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b)
{
    return a > b;
}

void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0 || n % 77 == 0 || n % 444 == 0 || n % 447 == 0 || n % 474 == 0 || n % 477 == 0 || n % 744 == 0 || n % 747 == 0 || n % 774 == 0 || n % 777 == 0)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t = 1; // cin>>t;
    while (t--)
    {
        solve();
    }
}