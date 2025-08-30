/*class Solution {
public:
    bool isAnagram(string s, string t) {
     
    sort( begin(s) ,  end(s));
    sort( begin(t), end(t));

    return s ==t ;
}

};  
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
    int freqtable[256] = {0};
      for( int i = 0 ; i< s.size() ; i++){
        freqtable[s[i]]++;
     }   //o(n)
     for( int i = 0 ; i< t.size() ; i ++){
        freqtable[t[i]]--;
     }//o(m)
     for( int i = 0 ; i < 256 ; i ++){
       if( freqtable[i] != 0 ){
            return false ;
       }
    }
     return true ;
    }
};