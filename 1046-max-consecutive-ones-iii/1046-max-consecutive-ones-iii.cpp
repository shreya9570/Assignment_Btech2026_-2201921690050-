class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int maxlen = INT_MIN ;
      int left = 0 ;
      int zeroes = 0 ;
      int i = 0 ;
     while( i < nums.size()){
        if( nums[i] == 0  ) zeroes++;
        if( zeroes > k){
            if( nums[left] == 0) zeroes-- ;
            left++;
        }
        if( zeroes<= k) maxlen = max( maxlen , i - left + 1);
       i++;   
        }
        return maxlen ;
     }
};