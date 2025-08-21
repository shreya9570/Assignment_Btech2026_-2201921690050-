//Brute force 
/*class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int i = 1;
        while ((long long)i * i <= x) {
            i++;
        }

        return i - 1;
    }
};
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        int low = 0, high = x, ans = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            if (mid * mid == x)
                return mid;
            else if (mid * mid < x) {
                ans = mid;       // possible answer
               low = mid + 1;  // move right
            }
            else {
                high = mid - 1;  // move left
            }
        }

        return ans;
    }
};
*/

class Solution {
public:
    int mySqrt(int x) {
    if( x == 0 || x == 1) return x ;
    int i = 1 ;
    while(( long long) i * i <= x ){
        i++ ;
    }
    return i-1 ;
    }
};




























