/*class Solution {
public:
    int trap(std::vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; // Edge case: no heights

        // Allocate arrays for left and right max heights
        int* left = new int[n];
        int* right = new int[n];

        // Fill the left array
        left[0] = height[0];
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i-1] , height[i]);
            //left[i] = (left[i - 1] > height[i]) ? left[i - 1] : height[i];
        }

        // Fill the right array
        right[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
          right[i] = max( right[i+1] , height[i]);
          // right[i] = (right[i + 1] > height[i]) ? right[i + 1] : height[i];
         // waterTrapped += (left[i] < right[i] ? left[i] : right[i]) - height[i];
        } 

        // Calculate the trapped water
        int waterTrapped = 0;
        for (int i = 0; i < n; i++) {
            waterTrapped +=( min(left[i] , right[i]) - height[i]);
        }

        // Clean up memory
        delete[] left;
        delete[] right;

        return waterTrapped;
    }
};
*/










































class Solution {
public:
    int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> lmax(n), rmax(n);
    lmax[0] = height[0];
    for (int i = 1; i < n; i++) {
        lmax[i] = max(lmax[i - 1], height[i]);
    }

    rmax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rmax[i] = max(rmax[i + 1], height[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += min(lmax[i], rmax[i]) - height[i];
    }

    return ans;
    }
};

























