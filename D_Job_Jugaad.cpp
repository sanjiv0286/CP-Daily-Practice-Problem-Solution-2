
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void bfs(vector<vector<int>> &adj, ll v, ll s)
{
    int ct = 0;
    vector<bool> vis(v, false);
    queue<int> q;
    vis[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        if (u > s)
        {
            ct++;
        }
        for (auto &x : adj[u])
        {
            if (vis[x] == false)
            {
                vis[x] = true;
                q.push(x);
                // ct++;
            }
        }
    }
    cout << ct + 1;
}

int main()
{
    int n;
    cin >> n;
    int u, v;
    vector<vector<int>> adj(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int start_node;
        cin >> start_node;
        bfs(adj, n, start_node);
        cout << endl;
    }
    return 0;
}
