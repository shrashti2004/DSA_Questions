class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, vector<int>> m1;
        unordered_map<char, vector<int>> m2;

        if (s.size() != t.size())
            return false;

        for (int i = 0; i < s.size(); i++) {
            m1[s[i]].push_back(i);
        }

        for (int j = 0; j < t.size(); j++) {
            m2[t[j]].push_back(j);
        }

        for (int i = 0; i < s.size(); i++) {
            if (m1[s[i]] != m2[t[i]]) {
                return false;
            }
        }

        return true;
    }
};
