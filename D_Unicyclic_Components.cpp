// DATE: 13-09-2023
// TIME: 15-42-34
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

int n,m;
int vis[300004];
vector<int>g[300002];
int nd=0,ed=0;

void dfs(int node ){
    vis[node]=1;
    nd++;
    ed+=g[node].size();
    for(auto x:g[node]){
        if(!vis[x])
        dfs(x);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  cout.tie(NULL);

    cin >> n >> m;
    while(m--){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bool flag=1;
    for(int i=1 ; i<=n ; i++){
        if(vis[i]==0){
            nd=0;ed=0;
            dfs(i);
            if(nd!=ed/2){flag=0;break;}
        }
    }
    if(flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
