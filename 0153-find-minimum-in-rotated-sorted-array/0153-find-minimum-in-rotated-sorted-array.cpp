class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            // If mid element is greater than the rightmost element,
            // min must be in right half
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            // Else, min is in left half (including mid)
            else {
                high = mid;
            }
        }

        // At the end, low == high == index of minimum element
        return nums[low];
    }
};
