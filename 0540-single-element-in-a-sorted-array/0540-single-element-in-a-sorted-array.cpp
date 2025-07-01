class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    int start = 0 ;
    int end = nums.size() - 1 ;
    while( start< end){
        int mid = start + (end - start) / 2 ;
        //we have to compair even odd pair
        if( mid % 2 == 1 )
        mid -- ;
        if( nums[mid] == nums[mid+1]){
                start = mid +2 ;
        }
        else {
            end = mid ;
        }
    }

    return nums[start];
    }
};