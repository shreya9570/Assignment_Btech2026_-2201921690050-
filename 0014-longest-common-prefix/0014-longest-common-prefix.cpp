class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if( strs.empty())
     return "";
     string prefix = strs[0];
     int n = strs.size();
     for( int i = 1 ; i < n ; i++){
          while(strs[i].find(prefix) != 0){
            prefix = prefix.substr( 0 , prefix.length() - 1);
            if( prefix.empty()){
                return "";
            }
          }
     }
     return prefix ;
    }
    };
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
      /*if(strs.empty()) {
        return "";
      }
      int n = strs.size();
      string prefix = strs[0];
      for( int i = 1 ; i < n ; i++ ){
     while( strs[i].find(prefix) != 0){
             prefix = prefix.substr( 0 , prefix.length()-1);
             if( prefix.empty()){
             return "";
        }
        }
      }
      return prefix;
      
    }
};
*/


















/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
    if (strs.empty()) {
        return ""; // Return empty string if input vector is empty
    }
    
    string prefix = strs[0]; // Start with the first string as the initial prefix
    
    for (int i = 1; i < strs.size(); ++i) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1); // Adjust prefix to match strs[i]
            if (prefix.empty()) {
                return ""; // Return empty string if no common prefix found
            }
        }
    }
    
    return prefix; // Return the longest common prefix found
}
};
*/