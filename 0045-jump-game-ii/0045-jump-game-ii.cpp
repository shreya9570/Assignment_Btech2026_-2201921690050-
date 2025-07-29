class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();

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

