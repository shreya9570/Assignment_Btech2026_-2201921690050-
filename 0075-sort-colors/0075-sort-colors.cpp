/*class Solution {
public:
    void sortColors(vector<int>& nums) {
       int zero = 0 ;
       int one = 0;
       int two = 0;
       int n = nums.size();
       for( int i = 0 ; i < n ;i++){
        if( nums[i] == 0 )
        zero++;
        if( nums[i] == 1 )
one++;
if( nums[i] == 2){
    two++;} } 
     int j = 0;
    while(zero){
       nums[j] = 0;
       j++;
       zero--;
    } while(one){
        nums[j] = 1;
        j++;
        one--;
    } while( two){
        nums[j] = 2;
        j++;
        two--;
    }
    }
};
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;
        
        while(mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++; mid++;
            } 
            else if (nums[mid] == 1) {
                mid++;
            } 
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};


class Solution {
public:
    void sortColors(vector<int>& nums) {
   int low = 0 ;
   int mid = 0 ;
   int high = nums.size()-1;
   while( mid <= high){
    if(nums[mid] == 0){
        swap( nums[low] , nums[mid]);
        low++;
        mid++;
    }
    else if( nums[mid] == 1){
        mid++;
    }
    else{swap( nums[mid] , nums[high]);
    high--;
   }
   }
    }
};
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0 ; int mid = 0 ; int high =nums.size() - 1 ;
        while( mid <= high){
            if( nums[mid] == 0) {
            swap( nums[low] , nums[mid]);
            low++;
            mid++;
        }
        else if( nums[mid] == 1){
          mid++;
        }
        else 
        {
            swap( nums[mid] , nums[high]);
            high--;
        }
        }
    }
};

