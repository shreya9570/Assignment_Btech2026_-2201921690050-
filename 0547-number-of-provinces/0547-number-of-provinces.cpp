    class Solution {
private:
/*
    void dfs(int node, vector<vector<int>>& adjls, vector<int>& vis) {
        vis[node] = 1;
        for (auto it : adjls[node]) {
            if (!vis[it]) {
                dfs(it, adjls, vis);
            }   } }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v = isConnected.size();
        vector<vector<int>> adjls(v);  // Use a vector of vectors to represent the adjacency list

        // Construct adjacency list from the adjacency matrix
        for (int i = 0; i < v; i++) {
            for (int j =0; j < v; j++) {  // Only check the upper triangle of the matrix to avoid duplicates
                if (isConnected[i][j] == 1 &&  i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);  // Add reverse edge for undirected graph
                       }    }  }
        vector<int> vis(v, 0);  // Visited array initialized to 0
        int cnt = 0;  // To count the number of connected components
        // Iterate through all nodes and perform DFS if not visited
        for (int i = 0; i < v; i++) {
            if (!vis[i]) {
                cnt++;  // Increment the number of connected components
                dfs(i, adjls, vis);  // Perform DFS starting from node i
            }  }
  return cnt;  // Return the number of connected components (provinces)
    }
};
*/
void dfs(int node ,vector<vector<int>>& adj,vector<int>&vis   ){
    vis[node] = 1 ;
    for( auto it : adj[node]){
        if(!vis[it]){
            dfs( it , adj , vis);
        }
    }
}
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v  = isConnected.size();
        vector<vector<int>>adj(v) ;
        for( int i = 0 ; i < v ; i++){
            for(int j = 0 ; j < v ; j++){
                if (isConnected[i][j] == 1 && i != j) {
                adj[i].push_back(j);
                adj[j].push_back(i);}
            }}
                vector<int>vis(v , 0 );
             int cnt = 0 ;
             for( int i = 0 ; i < v ; i ++){
                if(!vis[i]){
                    cnt++;
                    dfs( i , adj , vis);
                }
             }
        
             return cnt ;

    }
        };
