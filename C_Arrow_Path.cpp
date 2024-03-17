#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<string> &grid, int x, int y, int n)
{
    return x >= 1 && x <= 2 && y >= 1 && y <= n && (grid[x - 1][y - 1] == '>' || grid[x - 1][y - 1] == '<');
}

bool ratInMaze(vector<string> &grid, int x, int y, int n, vector<vector<bool>> &visited)
{
    if (x == 2 && y == n)
    {
        return true;
    }

    if (isSafe(grid, x, y, n) && !visited[x][y])
    {
        visited[x][y] = true;

        // Move according to the arrow
        if (grid[x - 1][y - 1] == '>')
        {
            if (ratInMaze(grid, x, y + 1, n, visited))
                return true;
        }
        else if (grid[x - 1][y - 1] == '<')
        {
            if (ratInMaze(grid, x, y - 1, n, visited))
                return true;
        }

        // Move downward if the arrow is pointing downward
        if (grid[x - 1][y - 1] == '>' || grid[x - 1][y - 1] == '<')
        {
            if (isSafe(grid, x + 1, y, n) && !visited[x + 1][y])
            {
                if (ratInMaze(grid, x + 1, y, n, visited))
                    return true;
            }
        }

        // No possible move, backtrack
        visited[x][y] = false;
        return false;
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
        vector<string> grid(2);
        for (int i = 0; i < 2; i++)
        {
            cin >> grid[i];
        }

        vector<vector<bool>> visited(3, vector<bool>(n + 1, false));

        if (ratInMaze(grid, 1, 1, n, visited))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
