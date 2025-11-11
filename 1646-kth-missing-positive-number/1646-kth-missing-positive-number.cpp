class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int n = arr.size();
        int missingCount = 0;
        int current = 1;

        while (i < n) {
            if (arr[i] == current) {
                ++i;
            } else {
                ++missingCount;
                if (missingCount == k) return current;
            }
            ++current;
        }

        // If not found inside the array, continue after last element
        while (true) {
            ++missingCount;
            if (missingCount == k) return current;
            ++current;
        }
    }
};
