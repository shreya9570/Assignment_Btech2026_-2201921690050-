// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int temp = n;
        int c = 0;

        // Count number of digits
        while (temp != 0) {
            temp = temp / 10;
            c++;
        }

        temp = n;
        int total = 0;

        // Calculate the sum of digits raised to power c
        while (temp != 0) {
            int remainder = temp % 10;
            total += pow(remainder, c);
            temp = temp / 10;
        }

        // Check if it's an Armstrong number
        if (total == n)
            return true;
        else
            return false;
    }
};
