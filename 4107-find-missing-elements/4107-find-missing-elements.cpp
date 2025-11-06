class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int start = nums[0];
        vector<int>ans ;
        for( int i = 1 ; i < nums.size() ; i++){
         int prev = nums[i-1];
         int curr = nums[i];
         while( ++prev < curr){
            ans.push_back(prev);
         }
        }
        return ans ;
    }
    };