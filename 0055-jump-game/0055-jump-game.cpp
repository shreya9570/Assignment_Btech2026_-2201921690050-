class Solution {
public:
    bool canJump(vector<int>& nums) {
   int maxreach = 0 ;
   int n = nums.size();
   for(int i = 0 ; i < n ; i++){
    if( i > maxreach){
        return false ;
    }
    else 
    maxreach = max( maxreach , i + nums[i] );
   }
   return true ;
    }
};
   
   
   
   
   
   
   
   
   
   
   
    /*int maxReach = 0;  // This keeps track of the farthest index we can reach

        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach)
                return false;  // We can’t reach this point
            
            maxReach = max(maxReach, i + nums[i]);  // Update max reach
        }

        return true;  // We made it to the end or beyond
    }
};
*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     /*   int maxReach = 0;  // This keeps track of the farthest index we can reach

        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach)
                return false;  // We can’t reach this point
            
            maxReach = max(maxReach, i + nums[i]);  // Update max reach
        }

        return true;  // We made it to the end or beyond
    }
};
*/