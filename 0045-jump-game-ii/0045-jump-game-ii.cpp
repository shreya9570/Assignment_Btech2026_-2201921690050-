class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return 0;            // already at the end, 0 jumps

        int jumps = 0;                  // number of jumps taken
        int currentEnd = 0;             // end of the range we can reach with current number of jumps
        int farthest = 0;               // farthest index we can reach from indexes within the current range

        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);

            // If we've reached the end of the current range, we must do another jump
            if (i == currentEnd) {
                ++jumps;
                currentEnd = farthest;
                // optional early exit: if currentEnd already reaches or passes last index
                if (currentEnd >= n - 1) break;
            }
        }
        return jumps;
    }
};

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
       /* int n = nums.size();

        if (n <= 1)
            return 0;

        if (nums[0] == 0)
            return -1;

        int jumps = 0;
        int l = 0, r = 0;

        while (r < n - 1) {
            int farthest = 0;

            for (int i = l; i <= r; i++) {
                farthest = max(farthest, i + nums[i]);
            }

            if (farthest == r)
                return -1;

            l = r + 1;
            r = farthest;
            jumps++;
        }

        return jumps;
    }
};
*/

