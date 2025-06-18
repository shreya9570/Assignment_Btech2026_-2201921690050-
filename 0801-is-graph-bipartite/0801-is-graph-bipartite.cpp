class Solution {
private:
bool dfs( int node , int col ,vector<vector<int>>& graph, vector<int>&color ){
     color[node] = col ;
     for( auto it : graph[node]){
        if(color[it] == col)
        return false ;
        else if( color[it] == -1 ){
        if( dfs( it , !col , graph , color ) == false ) 
        return false ;
        }
     } 
        return true ;


}
public:
    bool isBipartite(vector<vector<int>>& graph) {
       // a graph is bipertite if it can be colored in 2 and no two adjacent node have the same color 
       // if a graph is odd length than it cannot be bipertite 
       int V = graph.size();
           vector<int>color(V , -1);
           int start = 0 ;
            for( int i = 0 ; i < V ; i++){
                if(color[i] == -1)
              if( dfs( i , 0 , graph , color) == false){
              return false ;
            }
            }
            return true ;
    }
};