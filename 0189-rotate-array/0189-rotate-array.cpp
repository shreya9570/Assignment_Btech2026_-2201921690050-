class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int j = 0 ;
       int n = nums.size();
       vector<int>arr(n);
       for(int i = 0 ; i < n ; i++){
           arr[( i + k) % n] = nums[i];
        }
        nums = arr;
    }
};
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        /*
        int j = 0 ;
        int n =  nums.size();
vector<int>array(n);
       for(int i = 0 ; i < nums.size() ; i++ ){
        array[(i+k) % n]  = nums[i];
       } 
      nums = array;
    }
};
*/