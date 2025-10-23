#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumEnergy(vector<int>& energy, int k) {
        int n = (int)energy.size();
        long long ans = LLONG_MIN;

        // Process from end to start: if index t can jump to t+k, add the
        // accumulated sum at t+k into t so energy[t] becomes the total
        // sum starting at t (following k-jumps).
        for (int t = n - 1; t >= 0; --t) {
            if (t + k < n) energy[t] = energy[t] + energy[t + k];
            ans = max(ans, (long long)energy[t]);
        }
        return ans;
    }
};
