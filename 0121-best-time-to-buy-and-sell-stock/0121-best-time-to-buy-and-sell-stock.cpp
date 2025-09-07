class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int profit = 0 ;
    int buy = prices[0] ;
    for(int i = 1 ; i < prices.size() ; i++ ){
           if( prices[i] < buy ) {
           buy = prices[i];
    }
    else {
           profit = max( profit ,prices[i] - buy  );
    }
    }
    return profit ;
    }
};

    
    
    
    
    
    
    
    
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
     /*int profit = 0 ;
     int n = prices.size();
     int buy = prices[0];
     
     for( int i = 1 ; i < n ; i++){
        if( prices[i] < buy){
            buy = prices[i];
        }
        else {
            profit = max( profit , prices[i] - buy);
        }

     } 
     return profit;  
    }
};
*/




     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     