
class Solution {
  public:
    void print_divisors(int n) {
vector<int>large ;
        for (int i = 1; i*i <= n; i++) { // include n/2
            if( n % i == 0)
            {
               cout<< i <<" ";
                if( i != n/i) large.push_back(n/i);
            }
        }
        reverse( large.begin() , large.end());
        for( int i = 0 ; i < large.size() ; i++){
            cout<<large[i]<<" ";
        }
    }
};
        