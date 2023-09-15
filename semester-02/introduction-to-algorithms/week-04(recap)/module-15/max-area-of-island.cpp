class Solution
{
public:
    int n, m;
    int cnt;
    bool vis[100][100];
    vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool isValid(int ci, int cj)
    {
        if (ci >= 0 && ci < n && cj >= 0 && cj < m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void dfs(int si, int sj, vector<vector<int>> &grid)
    {
        vis[si][sj] = true;
        cnt++;
        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = path[i];
            int ci = p.first + si;
            int cj = p.second + sj;
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(ci, cj, grid);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int mx = 0;
        n = grid.size();
        m = grid[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    cnt = 0;
                    dfs(i, j, grid);
                    mx = max(mx, cnt);
                }
            }
        }
        return mx;
    }
};