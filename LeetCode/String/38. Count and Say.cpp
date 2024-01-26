#include <vector>
#include <string>

class Solution {
public:
    string countAndSay(int n) {
        vector<string> v;
        string s = "";
        v.push_back(s);

        for (int i = 1; i <= n; i++) {
            s = v[i - 1];
            if (s == "") {
                v.push_back("1");
            } else {
                string ans = "";
                int count = 1;

                for (int j = 0; j < s.size() - 1; ++j) {
                    if (s[j + 1] == s[j]) {
                        count++;
                    } else {
                        ans += (count + '0');
                        ans += s[j];
                        count = 1;
                    }
                }

                ans += (count + '0');
                ans += s.back();
                v.push_back(ans);
            }
        }
        return v[n];
    }
};
