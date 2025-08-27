class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        
        // take first k cards sum
        int frontsum = 0;
        for (int i = 0; i < k; i++) {
            frontsum += cardPoints[i];
        }

        int maxsum = frontsum;
        int backsum = 0;

        // move window from front to back
        for (int i = 0; i < k; i++) {
            frontsum -= cardPoints[k - 1 - i];    // remove one from the front
            backsum += cardPoints[n - 1 - i];    // add one from the back
            maxsum = max(maxsum, frontsum + backsum);
        }

        return maxsum;
    }
};
