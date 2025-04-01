class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, maxcount = 0;

        for (int right = 0; right < s.length(); right++) {
            while (seen.find(s[right]) != seen.end()) { // If duplicate found
                seen.erase(s[left]); // Remove leftmost character
                left++; // Slide window forward
            }
            seen.insert(s[right]); // Insert current character
            maxcount = max(maxcount, right - left + 1); // Update max length
        }
        return maxcount;
    }
};

