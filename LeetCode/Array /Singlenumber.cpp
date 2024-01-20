#include <unordered_map>
#include <vector>

class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        std::unordered_map<int, int> count;

        // Count occurrences of each number
        for (int num : nums) {
            count[num]++;
        }

        // Find the number with count 1
        for (auto it = count.begin(); it != count.end(); ++it) {
            if (it->second == 1) {
                return it->first;
            }
        }

        // Handle error or return a default value if needed
        return -1;
    }
};
