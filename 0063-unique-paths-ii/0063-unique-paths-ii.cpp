class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if (obstacleGrid[0][0]) {return 0;}
        int rows = obstacleGrid.size();
        int cols = obstacleGrid[0].size();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                obstacleGrid[i][j] = !obstacleGrid[i][j];
            }
        }

        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < cols; j++) {
                if (!obstacleGrid[i][j]) {continue;}
                else {
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1];
                }
            }
        }
        return obstacleGrid[rows-1][cols-1];

    }
};