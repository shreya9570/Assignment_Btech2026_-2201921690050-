#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
         int i = 0 ;
         int j = 0 ;
         int count = 0 ;
         int n = a.size();
         int m = b.size();
         int ans = -1 ;
         while ( i < n && j < m){
             if( a[i] < b[j]){
                 ans = a[i];
                 i++;
             }
             else {
                ans = b[j];
                j++;
                  }
                  count++;
                  if( count == k) return ans ;
         }
         while( i < n){
          ans = a[i++];
            ++count;
            if (count == k) return ans;
        }
        while (j < m) {
            ans = b[j++];
            ++count;
            if (count == k) return ans;
        }

        // if k is out of bounds
        return -1;
    }
};
    
                  
              
              
         