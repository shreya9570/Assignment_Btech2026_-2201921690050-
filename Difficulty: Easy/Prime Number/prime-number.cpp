class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int count = 0 ;
        if (n <= 1) return false;   // 0 and 1 are not prime
        if (n == 2) return true; 
       for( int i =2 ; i*i <= n ;i++){
           if( n % i == 0)
            return false ;
       } 
       return true ;
    }
};
