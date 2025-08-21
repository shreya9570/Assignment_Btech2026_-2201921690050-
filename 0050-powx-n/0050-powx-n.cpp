class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;  // use long long to avoid overflow
        if (num < 0) {
            num = -num;     // make n positive
            x = 1 / x;      // invert x for negative powers
        }

        double ans = 1.0;
        while (num > 0) {
            if (num % 2 == 1) {  // odd power
                ans = ans * x;
                num--;
            } else {             // even power
                x = x * x;
                num /= 2;
            }
        }

        return ans;
    }
};
