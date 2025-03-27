class solution{
    public:
    string reverseWords(string s) {
    int n = s.size();
   int i = 0 , r = 0 , l = 0 ;
   reverse( s.begin() , s.end());
   while(i < n){
    while( i < n && s[i] != ' '){
      s[r++] = s[i++];
       }
    if( l < r){
       reverse(s.begin()+l , s.begin()+r);
       s[i] = ' ';
        r++;
        l= r;
 }
 i++;
s = s.substr( 0 ,   r-1);
        
   }
   return s ;
} };




   















class Solution {
public:
    string reverseWords(string s) {
        //poore ko reverse
        reverse( s.begin(), s.end());
        int i = 0 ; int l = 0 ; int r = 0 ;
        int n = s.length();
        // individually reverse 
        while( i < n ){
            while( i < n && s[i] != ' '){
                s[r++] = s[i++];
            }
    // l      r         
if( l< r ){
    reverse( s.begin()+l , s.begin()+r);
    // aek space denge 
    s[r]= ' ';
    r++;
    // l = r se bhir same proces start hoga 
       l=r ;
}// ye to badhta rahega
i++;
        }
        // space hatne ke bad jo bac
        s = s.substr( 0 ,   r-1);
        return s ;

} };
        
        
    









/*class Solution {
public:
    string reverseWords(string s) {
       stack<string>St ;
       stringstream ss(s);
        string word;
      while( ss >> word){
        St.push(word);
      }
        string result = "";
        while(!St.empty()){
        string temp = St.top();
        result += temp ;
        St.pop();
        if(!St.empty() )
        result += " ";
        }
        return result ;

      }
};*/