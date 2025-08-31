class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastindex;
       for(int i = 0 ; i < nums.size() ; i++){
           int val = nums[i];
           if( lastindex.count(val)){
            if( i - lastindex[val] <= k){
                return true ;
            }
           }
           lastindex[val] = i ;
       }
       return false ;
    }
};