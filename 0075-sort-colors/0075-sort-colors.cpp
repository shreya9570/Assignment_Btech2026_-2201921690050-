class Solution {
public:
    void sortColors(vector<int>& nums) {
       int zero = 0 ;
       int one = 0;
       int two = 0;
       int n = nums.size();
       for( int i = 0 ; i < n ;i++){
        if( nums[i] == 0)
        zero++;
        if( nums[i] == 1 )
one++;
if( nums[i] == 2){
    two++;

}
       } 
     int j = 0;
    while(zero){
       nums[j] = 0;
       j++;
       zero--;
    }
    while(one){
        nums[j] = 1;
        j++;
        one--;
    }
    while( two){
        nums[j] = 2;
        j++;
        two--;
    }
    }
};