class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int i = 0;
        int sign = 1;
        int result = 0;
        
        // Step 1: Skip leading whitespace
        while (i < n && s[i] == ' ') {
            i++;
        }
        
        // Step 2: Determine sign
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i++] == '-') ? -1 : 1;
        }
        
        // Step 3: Convert digits and handle overflow
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            
            // Check for overflow
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            i++;
        }
        
        return result * sign;
    }
};