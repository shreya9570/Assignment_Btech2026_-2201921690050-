class Solution {
public:
    typedef pair<char, int> p;
    
    string frequencySort(string s) {
        //ascii char - 0 -127
        vector<p> vec(128); // Initialize vector for all ASCII characters
        
        // Count frequencies of each character
        for (char ch : s) {
            
            vec[ch].first = ch;  // Set the character
            vec[ch].second++;    // Increment the frequency
        }
        
        // Lambda function for sorting based on frequency
        auto lambda = [&](p &p1, p &p2) {
            return p1.second > p2.second;
        };
        
        // Sort characters by frequency in descending order
        sort(vec.begin(), vec.end(), lambda);
        //empty string 
        string result;
         // Construct the result string based on sorted frequencies
        for(int i = 0; i < 128; i++) {
            if(vec[i].second > 0) {
                char ch = vec[i].first;
                int freq = vec[i].second;
                result += string(freq, ch); // Append frequency times the character
            }
        }
        
        return result;
    }
};
