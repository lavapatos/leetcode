class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        if (n == 1) {return true;}
        ArrayList<Integer>[] adj = new ArrayList[n];
        for (int i = 0; i < n; i++) {
            adj[i] = new ArrayList(); 
        }

        for (int i = 0; i < edges.length; i++) {
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].add(v);
            adj[v].add(u);
        }

        Queue<Integer> q = new ArrayDeque();
        boolean[] visited = new boolean[n];
        Arrays.fill(visited, false);

        q.add(source);
        visited[source] = true;

        while (!q.isEmpty()) {
            int idx = q.poll();

            for (int v: adj[idx]) {
                if (v == destination) {return true;}
                else {
                    if (!visited[v]) {
                        q.add(v);
                        visited[v] = true;
                    }
                }
            }
        }
        return false;
    }
}