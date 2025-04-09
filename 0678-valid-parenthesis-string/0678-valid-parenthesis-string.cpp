class Solution {
public:
    bool checkValidString(string s) {
        int low = 0 ;
        int high = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
                if(s[i] == '(' ){ 
                low ++; // low ++ so that hme pata rhe ki kitne open bracet hai 
                high++; // taki jab ( mile to use reduse kare)
                }
                else if(s[i] ==')'){
                if( low > 0 ) low -- ; // aek ) mila 
                        high-- ;// taki usse pahle * aaya hoga to high ko increase kiya higa use bhi reduce karenge  
                         }
               else if(s[i] == '*'){
                if( low > 0) // Treat '*' as ')'  
                low-- ; 
                 high++; // Or treat '*' as '('
               }
                if(high < 0) return false ; // // More ')' than we can balance
    } 
    return low == 0 ;
    
    }
};