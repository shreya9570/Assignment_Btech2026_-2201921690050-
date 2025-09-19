#include <vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if(matrix.empty()) return ans;

        int m = matrix.size();        // number of rows
        int n = matrix[0].size();     // number of columns
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while(top <= bottom && left <= right) {
            // Top row
            for(int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // Right column
            for(int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // Bottom row
            if(top <= bottom) {
                for(int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Left column
            if(left <= right) {
                for(int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};
