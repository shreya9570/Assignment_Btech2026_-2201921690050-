// User function template for C++
class Solution {
public:
    bool match(string wild, string pattern) {
        int n = wild.length();
        int m = pattern.length();
        int i = 0, j = 0;
        int starIdx = -1, match = 0; // p → starIdx, q → match

        while (j < m) {
            if (i < n && (wild[i] == pattern[j] || wild[i] == '?')) {
                i++;
                j++;
            }
            else if (i < n && wild[i] == '*') {
                starIdx = i;
                match = j;
                i++;
            }
            else if (starIdx != -1) {
                match++;
                j = match;
                i = starIdx + 1;
            }
            else {
                return false;
            }
        }

        // Skip any remaining '*' in wild
        while (i < n && wild[i] == '*') {
            i++;
        }

        return i == n;
    }
};

