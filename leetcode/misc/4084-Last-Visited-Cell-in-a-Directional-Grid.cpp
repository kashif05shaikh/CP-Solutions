class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int r = 0, c = 0;
        vis[0][0] = true;

        while (true) {
            int nr = r, nc = c;
            char ch = grid[r][c];

            if (ch == 'L') nc--;
            else if (ch == 'R') nc++;
            else if (ch == 'U') nr--;
            else nr++;

            if (nr < 0 || nr >= m || nc < 0 || nc >= n || vis[nr][nc])
                return {r, c};

            vis[nr][nc] = true;
            r = nr;
            c = nc;
        }
    }
};