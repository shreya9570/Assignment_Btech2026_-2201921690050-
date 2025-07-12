class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int left = 0 ;
      int high = nums.size() - 1 ;
      while( left < high){
         int mid = (left + high) / 2 ;
         if( nums[mid] > nums[mid+1]){
            high = mid ;
         }
         else {
            left = mid +1 ;
         }
      }  
      return left;
    }
};