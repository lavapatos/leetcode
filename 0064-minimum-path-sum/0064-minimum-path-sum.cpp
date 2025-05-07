class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int i = 1, j = 1;

        while (i < rows) {
            grid[i++][0] += grid[i-1][0];
        }

        while (j < cols) {
            grid[0][j++] += grid[0][j-1];
        }

        for (i = 1; i < rows; i++) {
            for (j = 1; j < cols; j++) {
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }

        return grid[rows-1][cols-1];
        
    }
};