//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> freq;
        int repeating = -1, missing = -1;
        
        // Count frequencies
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        // Find repeating and missing elements
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                missing = i;
            }
            if (freq[i] == 2) {
                repeating = i;
            }
        }
        
        return {repeating, missing};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends