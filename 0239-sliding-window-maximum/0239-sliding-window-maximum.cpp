class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
     vector<int> ans ;
     deque<int>dq ;
     for( int i = 0 ; i < k ; i++){
        while(!dq.empty() && nums[i] >nums[dq.back()]){
        dq.pop_back();
     } 
     dq.push_back(i);
     }
     for( int i = k ; i < nums.size() ; i++){
        ans.push_back(nums[dq.front()]);
        // Remove out-of-window indices
        if (!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
        }
        while(!dq.empty() && nums[i] >nums[dq.back()]){
        dq.pop_back();
     } 
     dq.push_back(i);
     
     }
     ans.push_back(nums[dq.front()]);
     return ans ;
    }

};
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      /*  vector<int> ans;
        deque<int> dq;
        
        // Process first k elements
        for (int i = 0; i < k; ++i) {
            while (!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        // Process remaining elements
        for (int i = k; i < nums.size(); ++i) {
            // Add the maximum of the previous window to ans
            ans.push_back(nums[dq.front()]);
            
            // Remove out-of-window indices
            if (!dq.empty() && i - dq.front() >= k) {
                dq.pop_front();
            }
            
            // Maintain decreasing order in dq
            while (!dq.empty() && nums[i] > nums[dq.back()]) {
                dq.pop_back();
            }
            
            // Add the current index to dq
            dq.push_back(i);
        }
        
        // Add the maximum of the last window
        ans.push_back(nums[dq.front()]);
        
        return ans;
    }
};
*/