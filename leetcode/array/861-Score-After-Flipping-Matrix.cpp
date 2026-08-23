class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Make first column all 1s
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < n; j++)
                    grid[i][j] ^= 1;
            }
        }

        // For each column, make number of 1s maximum
        for (int j = 0; j < n; j++) {
            int zeros = 0, ones = 0;

            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0)
                    zeros++;
                else
                    ones++;
            }

            if (zeros > ones) {
                for (int i = 0; i < m; i++)
                    grid[i][j] ^= 1;
            }
        }

        // Calculate the score
        int ans = 0;

        for (int i = 0; i < m; i++) {
            int num = 0;

            for (int j = 0; j < n; j++) {
                num = num * 2 + grid[i][j];
            }

            ans += num;
        }

        return ans;
    }
};