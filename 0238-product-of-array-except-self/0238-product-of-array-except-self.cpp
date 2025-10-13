class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       
      int n = nums.size();
      vector<int>ans(n , 1);
      int prefix = 1 ;
      for(int i = 0 ;  i< n ; i++){
        ans[i] = prefix;
        prefix = prefix*nums[i];
      } 
      int suffix = 1 ;
      for( int i = n-1 ; i>=0  ; i--){
        ans[i] = suffix*ans[i];
        suffix = suffix*nums[i];
      }
      return ans;
      }
      };
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       /*
        int n = nums.size();
        vector<int> answer(n, 1);

        int prefix = 1;
        for (int i = 0; i < n; i++) {
            answer[i] = prefix;
            prefix *= nums[i];  // now this uses original nums[i]
        }

        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            answer[i] *= suffix;
            suffix *= nums[i];  // again uses original nums[i]
        }

        return answer;
    }
};
*/