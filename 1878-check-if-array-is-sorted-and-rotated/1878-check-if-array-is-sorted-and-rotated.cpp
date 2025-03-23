class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0 ;
        int n = nums.size();
       for(int i = 0 ; i < nums.size() ; i++){
         if (nums[i] > nums[(i + 1) % n]) { // Use modulo to compare last and first element
                count++;
       }

          }
          if(count >1){
            return false ;
          }
          else return true ;
    }

};