class Solution {
public:
    int totalMoney(int n) {
      int total = 0 ;
      int weekstart = 1 ;
      while( n > 0){
        for( int day = 0 ; day < min( n , 7) ; day++){
             total +=  weekstart + day;  

        }
        weekstart ++;
        n = n - 7 ;


      }
      return total ;
    }
};