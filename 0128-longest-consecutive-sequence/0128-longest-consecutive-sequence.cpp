class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for( int i = 0 ;  i < nums.size() ; i++){
               st.insert(nums[i]);
        }
        int longest = 0 ;
         for( int num : st){
            if( ! st.count(num-1)){
                   int currentnum = num ;
                   int currentstrak = 1 ;
                   
                   while( st.count( currentnum+1)){
                    currentnum ++;
                    currentstrak++;
                   }
                   longest = max( longest , currentstrak);

            }
         }
         return longest ;
        
        
    }
};