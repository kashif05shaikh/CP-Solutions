
class Solution {
public:
    vector<vector<int>> dp;
    int m, n;

    int dfs(int i, int j, int xr, vector<vector<int>>& grid) {
        if (i >= m || j >= n)
            return 1e9;

        xr ^= grid[i][j];

        if (i == m - 1 && j == n - 1)
            return xr;

        int pos = i * n + j;

        if (dp[pos][xr] != -1)
            return dp[pos][xr];

        int right = dfs(i, j + 1, xr, grid);
        int down = dfs(i + 1, j, xr, grid);

        return dp[pos][xr] = min(right, down);
    }

    int minCost(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        dp.assign(m * n, vector<int>(1024, -1));

        return dfs(0, 0, 0, grid);
    }
};
