class Solution {
public:
    bool isIsomorphic(string s, string t) {
     unordered_map< char , int> freq ;
     unordered_map< char , int> count ;
    for( int i = 0 ; i < s.size() ; i++){
       char c1 = s[i] ; char c2 = t[i];
         if( freq.count(c1) && freq[c1] != c2) return false ;
         if( count.count(c2) && count[c2] != c1) return false;
         freq[c1] = c2 ;
         count[c2] = c1; 
    }
    return true ;
    }
};