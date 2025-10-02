class Solution {
public:
    int strStr(string haystack, string needle) {
       int n = haystack.size();
       int m = needle.size();
       for( int i = 0 ; i < n ; i++){
        bool found = true ;
     for( int j = 0 ; j < m ; j++){
        if(haystack[i+j]  != needle[j]){
        found = false ;
        break;
     }
     }
       if(found) return i ;
       }
       return -1 ;
    }
};

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    /*  int n = haystack.size();
      int m = needle.size();
      for( int i = 0 ; i <= n - m ; i++){ // n - m taki i bahar na jaye 2nd loop me 
        bool found = true ; // so that true given to each i 
            for( int j = 0 ; j < m ; j++){
                if( haystack[i+j] != needle[j]){
                    found = false ; 
                    break; // tp save time and unnessary comparision
                }
            }
            if(found) return i ;
      }
      return -1 ;
    }
};
*/