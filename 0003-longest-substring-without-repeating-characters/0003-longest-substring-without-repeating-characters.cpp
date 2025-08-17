class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int left = 0;
        unordered_set<char> window;

        for (int i = 0; i < s.size(); i++) {
            while (window.count(s[i])) {
                window.erase(s[left]); // shrink window
                left++;
            }
            window.insert(s[i]); // expand window
            longest = max(longest, i - left + 1);
        }

        return longest;
    }
};

      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
       /* int lastIndex[256]; // To store last seen index of characters
        memset(lastIndex, -1, sizeof(lastIndex)); // Initialize all indices to -1
        
        int left = 0, maxcount = 0;

        for (int right = 0; right < s.length(); right++) {
            // If character was seen within the current window, move 'left'
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }

            lastIndex[s[right]] = right; // Update last seen index
            maxcount = max(maxcount, right - left + 1); // Update max length
        }

        return maxcount;
    }
};
*/