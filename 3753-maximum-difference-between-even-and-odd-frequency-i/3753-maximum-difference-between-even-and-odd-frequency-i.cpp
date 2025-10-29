class Solution {
public:
    int maxDifference(string s) {
       unordered_map<char , int> freq;
       for( int i = 0 ; i < s.size() ; i++){
        freq[s[i]]++;
       } 
       int maxodd = 1 ;
       int maxeven = INT_MAX ;
       for( auto & it : freq){
        if( it.second % 2 != 0 ){
            maxodd = max( maxodd , it.second);
        }
        else 
         maxeven = min( maxeven , it.second);
       }
       if( maxeven == INT_MAX) return maxodd;
       else
       return maxodd - maxeven ;
    }
};