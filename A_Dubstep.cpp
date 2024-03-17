#include <bits/stdc++.h>
#include <string>
using namespace std;
bool comp(int a, int b)
{
    return a > b;
}
void solve()
{

    string s;
    cin >> s;
    regex p("WUB");
    cout << regex_replace(s, p, " ");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve(); // cout<<endl;
    }
}
