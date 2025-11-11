class Solution {
public:
    int countSubstrings(string s) {

        int n = s.length();
        if( n== 1)
        return 1 ;
         vector<vector<bool>> dp( n , vector<bool>( n , false ));   
       // boolean[][] dp = new boolean[n][n];
        int countofpallindromes = 0 ; 
        //one length 
          for( int i = 0 ; i < n ; i ++){
            dp[i][i] = true ;
            countofpallindromes += 1 ;
          }
          // two length 
          for( int i = 0 ; i < n-1 ; i++){
            if( s[i] == s[i+1]){
                dp[i][i+1] = true ; 
                countofpallindromes += 1 ;
            }
          }
          for( int length = 3 ; length <= n ; length++){
            for( int i = 0 ; i <= n-length ; i++){
                int j = i +length -1 ; 
                if( s[i]== s[j] && dp[i+1][j-1]){
                    dp[i][j] = true ; 
                    countofpallindromes += 1 ;
                }
            }
          }
        return  countofpallindromes ;
    }
};