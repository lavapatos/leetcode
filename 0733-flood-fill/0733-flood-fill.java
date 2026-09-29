class Solution {
    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int N = image.length;
        int M = image[0].length;


        Queue<int[]> q = new ArrayDeque();
        boolean[][] visited = new boolean[N][M];
        for (boolean[] r : visited) {
            Arrays.fill(r, false);
        }

        int[][] movs = {
            {-1,0},
            {1,0},
            {0,-1},
            {0,1}
        };

        int initial_color = image[sr][sc];
        q.add(new int[] {sr, sc});
        
        visited[sr][sc] = true;
        

        while (!q.isEmpty()) {
            int[] actual = q.poll();

            int r = actual[0];
            int c = actual[1];
            image[r][c] = color;

            for (int[] m : movs) {
                int nR = r + m[0];
                int nC = c + m[1];

                if (nR >= 0 && nR < N &&
                    nC >= 0 && nC < M) 
                    {

                    if (!visited[nR][nC]) {
                        visited[nR][nC] = true;
                        if (image[nR][nC] == initial_color) {
                            image[nR][nC] = color;
                            q.add(new int[] {nR, nC});
                        }
                    }
                }
            }   
        }
        return image;


    }
}