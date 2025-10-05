/*class Solution {
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
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        string vowels = "aeiou";

        // Step 1: Count frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Track max vowel and consonant frequencies
        int maxVowel = 0, maxConsonant = 0;

        for (auto &p : freq) {
            char c = p.first;
            int count = p.second;

            if (vowels.find(c) != string::npos) {
                maxVowel = max(maxVowel, count);
            } else {
                maxConsonant = max(maxConsonant, count);
            }
        }

        // Step 3: Return sum of max frequencies
        return maxVowel + maxConsonant;
    }
};
