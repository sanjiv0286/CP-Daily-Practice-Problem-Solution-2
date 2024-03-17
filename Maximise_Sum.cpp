

//DATE: 22-10-2023
//TIME: 18-40-16 
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

#define ll long long
#define all(a) a.begin(), a.end()

#define forn(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define dep(i, b, a) for (int i = b; i >= a; i--)

#define print(x) cout << x << "\n"
#define vin(v)        \
    for (auto &x : v) \
    cin >> x
// #define vin() for(ll i=0;i<n;i++) cin>>v[i]
#define vout(v)           \
    for (auto x : v)      \
        cout << x << " "; \
    cout << endl
// #define vout() for(ll i=0;i<n;i++) cout<<v[i]<<" "
// #define vout(a,b,v) for(int i=a;i<b;i++){cout<<v[i]<<" ";}cout<<"\n";
#define vect(type1, name) vector<type1> name
#define vectp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define mpp(type1, type2, name) map<type1, type2> name

const int M = 1e9 + 7;
const int N = 1e5 + 7;
#define Pi 3.1415926535897932384626
// extern int x;

void solve()
{
    ll n;
    cin>>n;
    ll sum =0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
        sum = sum + v[i];
    }
    // cout<<sum;
    if(n==1 || n==2){
        cout<<sum<<endl;
        // break;
        return;

    }
     ll mini ;
    sort(v.begin(),v.end());
    if(v[n-2]!=v[n-1]){
     mini = min(v[n-2],v[n-1]);
    }
    else{
        mini= min(v[n-3],v[n-2]);
    }
    if(v[0]<mini){
        v[0] = mini; 
    }
    ll max_sum =0;
    for(int i=0;i<n;i++){
        max_sum += v[i];

    }
    cout<<max_sum<<endl;
   
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    ll t ;//= 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
