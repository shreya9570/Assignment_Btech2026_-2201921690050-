class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // map: sorted word -> all anagrams
        unordered_map<string, vector<string>> anagram;

        for (string s : strs) {
            string key = s;                 // copy original word
            sort(key.begin(), key.end());   // sort characters to form key
            anagram[key].push_back(s);      // group word by sorted key
        }

        vector<vector<string>> result;
        for (auto& value : anagram) {
            result.push_back(value.second); // collect groups
        }

        return result;
    }
};

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
       /*int n = strs.size();
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
*/