class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int , int>p;
     int n = nums.size();
     for( int i = 0 ; i < n ; i++){
        if( p.find(target - nums[i]) != p.end())
        return { p[target - nums[i]] , i};
p[nums[i]] =  i;
     }
     return {};
    }
};


































/*class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        // int is key and int is data 
        unordered_map<int , int > p ;
       for( int i = 0 ; i < n ; i ++){
        if ( p.find(target - nums[i]) != p.end())
        return { p[target - nums[i]] , i };
        p[nums[i]] = i ;
        
       }

return {};

        
    }
};*/