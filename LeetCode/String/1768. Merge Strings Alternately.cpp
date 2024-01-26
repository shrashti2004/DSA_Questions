class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string res = ""; // Initialize an empty string

        while (i < word1.size() && j < word2.size()) {
            res += word1[i++];
            res += word2[j++];
        }

        // Append the remaining characters of word1
        while (i < word1.size()) {
            res += word1[i++];
        }

        // Append the remaining characters of word2 using the correct variable j
        while (j < word2.size()) {
            res += word2[j++];
        }

        return res;
    }
};
