class Solution {
public:
    int maxFreqSum(string s) {
       vector<int>freq(26 , 0) ;
       for (char ch : s) {
            freq[ch - 'a']++;
        }

       string vowel = "aeiou";
       int maxvowel = 0 ;
       int maxcons = 0 ;
       for( int i = 0 ; i < 26 ; i ++){
            char c = 'a' + i;
            if( freq[i] > 0){
                if(vowel.find(c) != string::npos ){
                    maxvowel = max( maxvowel , freq[i]);
                }
                else {
                    maxcons = max( maxcons , freq[i]);
                }
            }

       }
       return maxvowel + maxcons;
    }
};