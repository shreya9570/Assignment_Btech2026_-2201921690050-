class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
         int low = 0, high = arr.size() - 1;

        while (low < high) {
            int mid = (low + high) / 2;

            // If mid element is greater than the rightmost element,
            // min must be in right half
            if (arr[mid] > arr[high]) {
                low = mid + 1;
            }
            // Else, min is in left half (including mid)
            else {
                high = mid;
            }
        }

        // At the end, low == high == index of minimum element
        return  low ;
    }
};
   