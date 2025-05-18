/*class Solution {
    private:
   void  dfs( int row, int col,vector<vector<int>>& image,int color, int delrow[] , int delcol[] , int ini , vector<vector<int>>&ans ){
    ans[row][col] = color;
  int n = image.size() ; int m = image[0].size();
  
  for( int i = 0 ; i < 4 ; i++){
    int nrow = row + delrow[i];
    int ncol = col + delcol[i];
    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                image[nrow][ncol] == ini && ans[nrow][ncol] != color) {
                dfs(nrow, ncol, image, color, delrow, delcol, ini, ans);
    }

  }
     }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
    int ini = image[sr][sc];
    vector<vector<int>>ans = image ;
      if (ini == color) return image;
    int delrow[] = {-1 , 0 , 1 , -1};
    int delcol[] = { 0 , +1 , 0 , -1};
    dfs( sr , sc , image , color , delrow , delcol , ini , ans  );
    return ans ;
    }
};
*/





















class Solution {
    private:
    void dfs( int row , int col , int delrow[] ,int delcol[] , int inicolor , int color , vector<vector<int>>&ans , vector<vector<int>>& image){
        ans[row][col] = color;
        int n = image.size();
        int m = image[0].size();
        for( int i = 0 ; i < 4 ; i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if( nrow >=  0 && nrow < n && ncol >= 0 && ncol < m  && ans[nrow][ncol] != color && image[nrow][ncol] == inicolor ){
dfs ( nrow , ncol , delrow , delcol , inicolor , color ,  ans , image);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       int inicolor = image[sr][sc];
       if (inicolor == color) return image; // Avoid unnecessary recursion
        vector<vector<int>>ans = image ;
        int delrow[] = { -1 , 0 , 1 , 0};
        int delcol[] = { 0 , +1 , 0 , -1};
        dfs( sr , sc , delrow , delcol , inicolor , color,  ans ,image);
 return ans ;
        
    }
  
};
