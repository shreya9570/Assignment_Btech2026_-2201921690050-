class Solution {
public:
    int nextBeautifulNumber(int n) {
       int num = n + 1;
        while (true) {
            if (isBalanced(num)) return num;
            num++;
        }
    }

    // Helper function to check if a number is numerically balanced
    private:
     bool isBalanced(int num) {
        int count[10] = {0} ;// digit count array

        // Count frequency of each digit
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            count[digit]++;
            temp /= 10;
        }

        // Check condition: for each digit that appears, freq == digit
        for (int d = 0; d <= 9; d++) {
            if (count[d] != 0 && count[d] != d) {
                return false;
            }
        }
        return true;
    }
};
  