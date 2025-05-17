//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to count inversions in the array.
    int merge(vector<int>&arr , int low , int mid , int high){
        vector<int>temp ;
        int left = low ;
        int right = mid+1 ;
        int cnt = 0 ;
        while(left <= mid && right <= high){
            if( arr[left] <= arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                cnt += (mid - left +1);
                right++;
            }
        }
        while(left <= mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(arr[right]);
            right++;
        }
        for( int i = low ; i <= high ; i++){
            arr[i] = temp[i- low];
        }
        return cnt ;
    }
    int mergeSort(vector<int>&arr , int low , int high){
        int cnt = 0 ;
        if( low >= high) return cnt ;
        int mid = (low + high)/ 2 ;
        cnt += mergeSort( arr , low , mid);
      cnt+= mergeSort( arr , mid+1 , high);
      cnt+= merge( arr , low , mid , high);
      return cnt ;
    }
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
       return mergeSort( arr , 0 , n-1);    
    
    }
};


//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends