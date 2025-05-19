class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& board) {
        vis[row][col] = 1;
        int n = board.size();
        int m = board[0].size();
        int delRow[] = {-1, 0, 1, 0};
        int delCol[] = {0, -1, 0, 1};

        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                && vis[nrow][ncol] == 0 && board[nrow][ncol] == 'O') {
                dfs(nrow, ncol, vis, board);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));

        // 1. Traverse first and last row
        for (int j = 0; j < m; j++) {
            if (board[0][j] == 'O' && !vis[0][j]) {
                dfs(0, j, vis, board);
            }
            if (board[n - 1][j] == 'O' && !vis[n - 1][j]) {
                dfs(n - 1, j, vis, board);
            }
        }

        // 2. Traverse first and last column
        for (int i = 0; i < n; i++) {
            if (board[i][0] == 'O' && !vis[i][0]) {
                dfs(i, 0, vis, board);
            }
            if (board[i][m - 1] == 'O' && !vis[i][m - 1]) {
                dfs(i, m - 1, vis, board);
            }
        }

        // 3. Flip unvisited 'O's to 'X'
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 'O' && vis[i][j] == 0) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};
