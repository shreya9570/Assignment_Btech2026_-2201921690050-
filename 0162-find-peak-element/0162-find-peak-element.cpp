class Solution {
public:
    int findPeakElement(vector<int>& nums) {
      int left = 0 ;
      int high = nums.size() - 1 ;
      while( left < high){
        int mid = (left + high) / 2 ;
            if( nums[mid] > nums[mid +1]){
                high = mid ;   // matlab pike right me hoga ya mid hi pick hoga
            }
            else {
                left = mid +1 ; // matlab peak right me hai 
            } 
      }
      return left ;
    }
};
