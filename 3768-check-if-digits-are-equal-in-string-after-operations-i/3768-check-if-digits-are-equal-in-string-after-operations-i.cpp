class Solution {
public:

    bool hasSameDigits(string s) {
        int n = s.size();
        while(s.length()>2){
            string ans = "";
    for( int i = 0 ; i < s.length() -1 ; i++){
       int new_degit = (s[i] -'0' + s[i+1] -'0') % 10 ;
        ans += (new_degit + '0');
        
    }
            s = ans ;
    
         } 
        return s[0]== s[1];
    }
    
        
};