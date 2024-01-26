

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        
        // Sort the input array to start with the first permutation
        sort(nums.begin(), nums.end());
        
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
        
        return result;
    }
};
