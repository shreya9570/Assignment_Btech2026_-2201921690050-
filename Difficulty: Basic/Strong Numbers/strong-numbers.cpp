class Solution {
  public:
  int factorial( int n){
      int fact = 1;
      for( int i = 1 ; i<= n ;i++){
         fact = fact * i;  
      }
      return fact ;
  }
    int isStrong(int N) {
        // code here
       int  temp = N ;
        int sum = 0 ;
        while( temp != 0){
            int rem = temp % 10;
            sum += factorial(rem );
            temp = temp / 10 ;
        }
        if( sum == N)
        return 1 ;
        else return 0  ;
    }
};