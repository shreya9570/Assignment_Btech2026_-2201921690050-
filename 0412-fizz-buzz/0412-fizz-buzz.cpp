#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans; // declare the result vector
        
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ans.push_back("FizzBuzz");  // divisible by both
            } 
            else if (i % 3 == 0) {
                ans.push_back("Fizz");      // divisible by 3
            } 
            else if (i % 5 == 0) {
                ans.push_back("Buzz");      // divisible by 5
            } 
            else {
                ans.push_back(to_string(i)); // otherwise number as string
            }
        }
        
        return ans;
    }
};
