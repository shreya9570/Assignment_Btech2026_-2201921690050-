class Solution {
public: /*
    int missingNumber(vector<int>& nums) {
     int count = 0 ;
    int i = 0 ;
    int n = nums.size();
    while( i < n){
     count++;
     i++;
    }
    int sum = 0 ;
    for( int i = 0 ; i <= n ; i++){
      sum += i ;  
    }
    int actualsum = 0 ;
    for( int i = 0 ; i < n ; i++){
      actualsum += nums[i];  
    }
    int misingsum = sum - actualsum;
    return misingsum;
    }
};
*/
int missingNumber(vector<int>& nums) {
int n = nums.size();
for( int i = 0 ; i < nums.size() ; i++){
    n += i - nums[i];
}
return n ;
    }
};