#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } else {
                if (st.empty() || 
                   (s[i] == ')' && st.top() != '(') ||
                   (s[i] == '}' && st.top() != '{') ||
                   (s[i] == ']' && st.top() != '[')) {
                    return false;
                }
                st.pop();  // matched, so remove the opening
            }
        }
        return st.empty();  // valid only if stack is empty
    }
};

























    /*bool isValid(string s) {
        stack<char> st; // Create a stack to keep track of opening brackets
        for (char c : s) {
            // Check if the character is an opening bracket
            if (c == '(' || c == '{' || c == '[') {
                st.push(c); // Push it onto the stack
            } else {
                // Check if the stack is empty or the brackets do not match
                if (st.empty() || 
                    (c == ')' && st.top() != '(') || 
                    (c == '}' && st.top() != '{') || 
                    (c == ']' && st.top() != '[')) {
                    return false; // Return false if invalid
                }
                st.pop(); // Pop the matched opening bracket
            }
        }
        
        return st.empty(); // Return true if all brackets are matched
    }
};
*/