//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    // Function to calculate sum of all numbers present in a string.
    int findSum(string& s) {
  int num =0 ;
  int sum = 0 ;
  for( int i = 0 ; i < s.size() ; i++){
      if( isdigit(s[i])){
          num = num*10 + ( s[i] -'0');
          }
          else {
              sum += num;
              num= 0 ;
               }
              
  }  sum += num; // Add the last number if present
        return sum;
  
}
};

//{ Driver Code Starts.

// Driver code
int main() {
    // input alphanumeric string
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution obj;
        cout << obj.findSum(str);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends