class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int , int>freq ;
    for( int i = 0 ; i < n ; i++){
       freq[nums[i]]++;
    }
    for( auto & num : freq){
        if(num.second > n /2)
        return num.first ;
    }
    return -1 ;
    }
};
    
    
    
    
    
    
    
    
    
    
    
    
    



    
    
    
    
    
    
    
    
    
    
    
    
     /* int n = nums.size();
      int m = n / 2 ;
      unordered_map< int , int>freq;
       
      for( int i = 0 ; i < n ; i++){
          freq[nums[i]]++ ;
     }
     for( auto &it : freq ){
       if(it.second > m){
        return it.first ;
       }  
     }
     return -1 ;
    
}
};
*/
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
       
        /*
        int n = nums.size();
       unordered_map<int , int >freq;
       for( int i = 0 ; i < nums.size() ; i++){
        freq[nums[i]]++;
       }
       for(auto&it : freq){
        if( it.second > n/2){
            return it.first;
        }
       }
       return -1;
       }
    
    };
    */
