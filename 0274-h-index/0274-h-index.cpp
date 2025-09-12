class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        sort(citations.begin(), citations.end());  // fix typo
        
        for (int i = n; i >= 0; i--) {   // check possible h-index from n to 0
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (citations[j] >= i) {
                    count++;
                }
            }
            if (count >= i) {   // fix logic
                return i;       // return i, not j
            }
        }
        return 0;
    }
};

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    /*int n = citations.size();
    sort(citations.begin(), citations.end());
    for (int h = n; h >= 0; h--) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (citations[i] >= h) {
                count++;
            }
            if (count >= h) // as we should have atleast 
                return h;
        }
    }
    return 0;
}
};
*/