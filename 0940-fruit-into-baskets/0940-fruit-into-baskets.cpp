/*class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen = 0;
        for (int i = 0; i < fruits.size(); i++) {
            set<int> st;
            for (int j = i; j < fruits.size(); j++) {
                st.insert(fruits[j]);
                if (st.size() <= 2) {
                    maxlen = max(maxlen, j - i + 1);
                } else {
                    break;
                }
            }
        }
        return maxlen;
    }
};
*/
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, r = 0, maxlen = 0;
        unordered_map<int,int> mapp;

        while (r < fruits.size()) {
            mapp[fruits[r]]++;

            while (mapp.size() > 2) {
                mapp[fruits[l]]--;
                if (mapp[fruits[l]] == 0) {
                    mapp.erase(fruits[l]);
                }
                l++;
            }

            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};
