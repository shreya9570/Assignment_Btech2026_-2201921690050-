class Solution {
public: void dfs( int row , int col , vector<vector<int>>&vis , vector<vector<int>>&grid){
      vis[row][col]  = 1 ;
      int delRow[] = {-1 , 0 , 1 , 0};
      int delCol[] = { 0 , 1 , 0 , -1};
     int n = grid.size();
     int m = grid[0].size();
     for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                dfs(nrow, ncol, vis, grid);
            }
        }
}
    int numEnclaves(vector<vector<int>>& grid) {
        int count = 0 ;
     int n = grid.size();
     int m = grid[0].size();
     vector<vector<int>>vis( n , vector<int>(m , 0 ));
     // 1. Traverse first and last row
        for (int j = 0; j < m; j++) {
            if (grid[0][j] == 1 && !vis[0][j]) {
                dfs(0, j, vis, grid);
            }
            if (grid[n - 1][j] == 1 && !vis[n - 1][j]) {
                dfs(n - 1, j, vis, grid);
            }
        }
// 2. Traverse first and last column
        for (int i = 0; i < n; i++) {
            if (grid[i][0] == 1 && !vis[i][0]) {
                dfs(i, 0, vis, grid);
            }
            if (grid[i][m - 1] == 1 && !vis[i][m - 1]) {
                dfs(i, m - 1, vis, grid);
            }
        }
// 3. Flip unvisited 'O's to 
          for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( grid[i][j] == 1 && vis[i][j] == 0){
                    grid[i][j] = 0 ;
                    count++;
                }
            }
          }
          return count;
    }};
    