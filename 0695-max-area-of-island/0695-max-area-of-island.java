class Solution {
    public int maxAreaOfIsland(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        boolean[][] visited = new boolean[m][n];
        for (boolean[] r : visited) {Arrays.fill(r, false);}

        int[][] movs = {
            {-1,0},
            {1,0},
            {0,-1},
            {0,1}
        };

        int ans = 0;
        Queue<int[]> q = new ArrayDeque();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if(!visited[i][j] && grid[i][j] == 1) {
                    q.add(new int[]{i,j});
                    visited[i][j] = true;
                    int area = 1;
                    while(!q.isEmpty()) {
                        int[] act = q.poll();

                        int f = act[0];
                        int c = act[1];

                        for (int[] mov: movs) {
                            int nF = f + mov[0];
                            int nC = c + mov[1];

                            if (nF >= 0 && nF < m && nC >= 0 && nC < n &&
                                !visited[nF][nC] && grid[nF][nC] == 1) {
                                    area++;
                                    visited[nF][nC] = true;
                                    q.add(new int[] {nF, nC});
                            }
                        }
                    }
                    ans = Math.max(ans, area);

                }
            }
        }

        return ans;
    }
}