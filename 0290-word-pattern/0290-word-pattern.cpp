class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;     // (empty list of strings initially)
stringstream ss(s);       // (converts string s = "I love coding" into a stringstream object)
string word;              // (temporary string holder for each word)

while (ss >> word) {      // (extracts one word at a time from ss into word)
    words.push_back(word); // (stores that word into vector words)
}

        // If the number of words doesn't match the pattern length, fail
        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> freq;   // pattern char -> word
        unordered_map<string, char> count;  // word -> pattern char

        for (int i = 0; i < pattern.size(); i++) {
            char c1 = pattern[i];
            string c2 = words[i];   // ✅ use words[i], not s[i]

            if (freq.count(c1) && freq[c1] != c2) return false;
            if (count.count(c2) && count[c2] != c1) return false;

            freq[c1] = c2;
            count[c2] = c1;
        }
        return true;
    }
};
