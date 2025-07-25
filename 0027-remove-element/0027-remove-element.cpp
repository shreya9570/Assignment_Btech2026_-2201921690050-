class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for next position to keep

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Keep the element
                k++;
            }
        }

        return k; // New length of the modified array
    }
};
