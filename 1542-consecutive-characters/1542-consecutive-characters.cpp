class Solution {
public:
    int maxPower(string s) {
        int count = 1;
        int maxfreq = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                maxfreq = max(maxfreq, count);
                count = 1;
            }
        }
        maxfreq = max(maxfreq, count); // check final streak
        return maxfreq;
    }
};

      