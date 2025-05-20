class Solution {
  public:
  int firstOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;  // Search left part
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of target
int lastOccurrence(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;  // Search right part
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}
    int countFreq(vector<int>& arr, int target) {
       int first = firstOccurrence(arr, target);
    if (first == -1)
        return 0;
    int last = lastOccurrence(arr, target);
    return last - first + 1;
} 
    
};

