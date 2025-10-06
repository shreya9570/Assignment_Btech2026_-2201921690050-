class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set< long long >st ;
       for( int num : nums){
        st.insert( num);
        if( st.size() > 3 ){
            st.erase(st.begin());
        }
       }
        if( st.size() == 3){
        return *st.begin();
        }
        else {
           return  *st.rbegin() ; // give max ;

        }
       }
};
