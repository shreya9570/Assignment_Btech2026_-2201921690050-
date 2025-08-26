class Solution {
public:
    int characterReplacement(string s, int k) {
       int left = 0;                // window start
       int maxlen = 0;              // answer
       vector<int> freq(26, 0);     // frequency of chars
       int right = 0;               // window end
       int maxfreq = 0;             // highest freq in window

       while (right < s.size()) {
           // add current char
           freq[s[right] - 'A']++;
           maxfreq = max(maxfreq, freq[s[right] - 'A']);

           // check validity of window
           if ((right - left + 1) - maxfreq > k) {
              freq[s[left] - 'A']--;   // remove left char
              left++;                  // shrink window
           }

           // update maxlen
           maxlen = max(maxlen, right - left + 1);

           right++;  // expand window
       } 
       return maxlen;
    }
};
