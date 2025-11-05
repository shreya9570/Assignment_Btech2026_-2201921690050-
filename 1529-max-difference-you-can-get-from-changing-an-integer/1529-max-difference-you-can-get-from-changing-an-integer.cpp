#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        // Build a -> maximum number by replacing first non-'9' digit with '9'
        string a = s;
        char toReplaceA = 0;
        for (char c : s) {
            if (c != '9') { toReplaceA = c; break; }
        }
        if (toReplaceA) {
            for (char &c : a) if (c == toReplaceA) c = '9';
        }

        // Build b -> minimum number with no leading zeros
        string b = s;
        // If first digit is not '1', replace all occurrences of first digit by '1'
        if (b[0] != '1') {
            char x = b[0];
            for (char &c : b) if (c == x) c = '1';
        } else {
            // first digit is '1', find first digit (from index 1) that is not '0' or '1'
            char toReplaceB = 0;
            for (size_t i = 1; i < b.size(); ++i) {
                if (b[i] != '0' && b[i] != '1') { toReplaceB = b[i]; break; }
            }
            if (toReplaceB) {
                for (char &c : b) if (c == toReplaceB) c = '0';
            }
        }

        // Convert strings back to integers (safe because num <= 1e8)
        int ai = stoi(a);
        int bi = stoi(b);
        return ai - bi;
    }
};
