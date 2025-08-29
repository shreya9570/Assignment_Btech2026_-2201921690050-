class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        // Directions for 8 neighbors
        vector<vector<int>> directions = {
            {1,0}, {-1,0}, {0,1}, {0,-1},
            {1,1}, {1,-1}, {-1,1}, {-1,-1}
        };
        // Copy original board
        vector<vector<int>> copyBoard = board;
        // Traverse all cells
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int liveNeighbors = 0;
                // Count live neighbors
                for(auto& d : directions) {
                    int ni = i + d[0];
                    int nj = j + d[1];
                    if(ni >= 0 && ni < m && nj >= 0 && nj < n && copyBoard[ni][nj] == 1) {
                        liveNeighbors++;
                    }
                }
// Apply rules
                if(copyBoard[i][j] == 1) {
                    if(liveNeighbors < 2 || liveNeighbors > 3)
                        board[i][j] = 0;  // dies
                } else {
                    if(liveNeighbors == 3)
                        board[i][j] = 1;  // reproduction
                }
            }
        }
    }
};
