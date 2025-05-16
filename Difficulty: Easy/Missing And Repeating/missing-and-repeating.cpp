//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long long n = arr.size();
        long long sn = (n *(n+1))/ 2 ;
        long long s2n = (n * (n+1)*(2*n+1))/6 ;
        long long s = 0 , s2 = 0 ;
        for(int i = 0 ; i < n ; i++){
        s += arr[i];
        s2 += (long long)arr[i] * (long long)arr[i];
        }
        long long val1 = s - sn ;
        long long val2 = s2 - s2n ;
        val2 = val2/val1 ;
        long long x = (val1+val2)/2;
        long long y = x - val1 ;
        return {(int)x , (int)y};
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