class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxarea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);  // Choose the shorter height
            int w = right - left;                      // Width between lines
            int area = h * w;
            maxarea = max(maxarea, area);              // Update max area

            // Move the pointer pointing to the shorter line
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxarea;
    }
};
