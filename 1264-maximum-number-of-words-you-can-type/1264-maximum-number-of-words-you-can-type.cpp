class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
         text += ' ';
       int n = text.size();
       bool cantype = "";
       int count = 0 ;
       for( int i = 0 ; i < n ; i++){
          char ch = text[i];
          if( ch == ' '){
          if(cantype) count++;
          cantype = true ;
          }
          else {
            if( brokenLetters.find(ch) != string::npos){
  cantype = false ;
            }
       } 
    }
    return count;
    }
};