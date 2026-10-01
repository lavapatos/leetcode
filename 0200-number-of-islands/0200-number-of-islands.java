class Solution {

    public int numIslands(char[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int counter = 0;
        boolean[][] visited = new boolean[m][n];
        for (boolean[] r: visited) {
            Arrays.fill(r, false);
        }

        int movs[][] = {
            {-1,0},
            {1,0},
            {0,-1},
            {0,1}
        };
        Queue<int[]> q = new ArrayDeque();


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                boolean isle = false;
                if (!visited[i][j] && grid[i][j] == '1') {
                    q.add(new int[]{i,j});
                    visited[i][j] = true;
                    isle = true;
                    while (!q.isEmpty()) {
                        int[] act = q.poll();

                        int f = act[0];
                        int c = act[1];

                        for (int[] mov : movs) {
                            int nF = f + mov[0];
                            int nC = c + mov[1];

                            if (nF >= 0 && nF < m && nC >= 0 && nC < n) {
                                if (!visited[nF][nC] && grid[nF][nC] == '1') {
                                    q.add(new int[] {nF, nC});
                                    visited[nF][nC] = true;
                                }
                            }
                        }

                    }
                    if (isle) {counter++;}
                }
            }
        }
        return counter;
    }
}