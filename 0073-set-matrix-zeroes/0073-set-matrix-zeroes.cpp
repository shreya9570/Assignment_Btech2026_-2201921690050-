class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>p( n , 0);
        vector<int>q( m , 0);
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( matrix[i][j] == 0){
                    p[i] = 1 ;
                    q[j] = 1;
                }
            }
        }
        for( int i = 0 ; i < n; i++){
            for( int j = 0 ; j < m ; j++){
                if( p[i] == 1 || q[j] == 1){
                    matrix[i][j] = 0 ;
                }
            }
        }
    }
};