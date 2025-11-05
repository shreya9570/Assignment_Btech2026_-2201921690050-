class Solution {
public:
    int maximumDifference(vector<int>& nums) {
       int diff= -1 ;
        int minnum = nums[0];
        for( int i = 1 ; i < nums.size() ; i++){
              if( nums[i] <= minnum){
                minnum = nums[i];
              }
              else
              diff = max( diff ,  nums[i] - minnum );
        }
        return diff;
    }
};