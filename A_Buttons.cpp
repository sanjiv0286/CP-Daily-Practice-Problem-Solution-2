// // DATE: 07-02-2024
// // TIME: 17-16-12
// #include <bits/stdc++.h>
// #include <unordered_set>
// using namespace std;

// #define ll long long

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     int ct = 0;
//     // sort(v.begin(), v.end());
//     for (int i = 0; i < n; i++)
//     {
//         if (i + 1 != v[i])
//         {
//             cout << i + 1<<" ";
//             ct++;
//             if (ct == 2)
//             {
//                 break;
//             }
//         }
//     }
//     return 0;
// }




// Create a class A with method printA which just prints character “A”, 
// create a child class B with method printB which just prints character “B”.
//  Create an instance of class B and call method printB and method printA on this instance.



#include "hero.cpp"
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ct = 0;
    // sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if (i + 1 != v[i])
        {
            cout << i + 1<<" ";
            ct++;
            if (ct == 2)
            {
                break;
            }
        }
    }
    return 0;
}

