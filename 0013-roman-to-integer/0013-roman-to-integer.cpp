class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char , int>pair = {
        { 'I' , 1},
        {'V' , 5},
        {'X' , 10 },
        {'L' , 50},
        {'C' , 100},
        {'D' , 500},
        {'M' , 1000}
    };
    int result = 0 ;
    int n = s.length();
    for( int i = 0 ; i < n ; i++){
        if( i < n -1 && pair[s[i]] < pair[s[i+1]] ){
            result += pair[s[i+1]] - pair[s[i]];
            i++;
        }
        else{
            result += pair[s[i]];
        }
    }
    return result ;
 }
};























/*
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> romanToIntMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int result = 0;
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            if (i < n - 1 && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
                // If current numeral is less than the next numeral, it's a subtraction case
                result += romanToIntMap[s[i + 1]] - romanToIntMap[s[i]];
                ++i; // Skip the next numeral since it's already considered
            } else {
                // Otherwise, just add the value of the current numeral
                result += romanToIntMap[s[i]];
            }
        }
        
        return result;
    }
};

*/