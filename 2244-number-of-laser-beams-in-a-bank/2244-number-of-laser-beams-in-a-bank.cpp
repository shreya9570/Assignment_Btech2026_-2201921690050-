class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int s = 0, p = 0, c;

        for (int i = 0; i < bank.size(); i++) {
            c = 0;
            for (int j = 0; j < bank[i].size(); j++) {
                if (bank[i][j] == '1')
                    c++;
            }

            if (c > 0) {
                s += p * c;
                p = c;
            }
        }

        return s;
    }
};
