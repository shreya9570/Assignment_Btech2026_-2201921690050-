class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {  
       int n = strs.size();
         unordered_map< string , vector<string>>angram ;
       for( string s : strs){
         string key = s ;  
         sort(key.begin() , key.end());
         angram[key].push_back(s);

       }  
       vector<vector<string>>result;
       for( auto&entry : angram ){
        result.push_back(entry.second);
       }
       return result ;

    }

};