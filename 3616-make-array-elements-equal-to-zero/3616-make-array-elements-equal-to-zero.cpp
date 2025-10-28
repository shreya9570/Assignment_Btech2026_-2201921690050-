class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int valid = 0 ;
        for( int start = 0 ; start < n ; start++){
            if( nums[start] != 0) continue;

            for( int intdir : {-1 , 1}){
                vector<int>a =nums;
                int curr = start ;
                int dir = intdir;

                while( curr >= 0 && curr <n ){
                     if( a[curr] == 0){
                              curr+=dir;
                     }
                     else {
                        a[curr]--;
                        dir = -dir;
                        curr += dir ;
                     }
                }
                bool allzero = true;
                for( int i = 0 ; i < n ; i++){
                    if( a[i] !=0) {
                    allzero = false ;
                    break;
                }
                }
                if(allzero) valid++;
            }
        }
        return valid;
    }
};