/*class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans = -1 ;
      for( int i = 0 ; i < nums.size() ; i++){
        if( nums[i] == target)
         ans = i ;
      }
      return ans ; 
    }
};
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() ;
        int s = 0 ;
        int e = n-1 ;
        return bsearch( nums , target , s , e );}
       int bsearch(vector<int>&arr , int target , int start , int end ){
            if( start > end) return -1 ;
            int mid = (start +end)/2 ;
            if( arr[mid] == target)
            return mid ;
            else if( arr[mid] > target){
            return  bsearch( arr , target , start , mid -1 );
            }
            else 
             return bsearch( arr , target , mid +1 , end );
        }
     
        };