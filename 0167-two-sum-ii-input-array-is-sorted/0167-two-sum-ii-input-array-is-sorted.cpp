class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target)
                return {left + 1, right + 1}; // 1-based index
            else if (sum > target)
                right--;
            else
                left++;
        }

        return {-1, -1}; // fallback (not needed if guaranteed, but avoids warning)
    }
};
