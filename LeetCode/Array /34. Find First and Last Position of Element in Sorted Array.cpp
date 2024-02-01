

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result{-1, -1}; // Initialize with -1, assuming target is not found

        // Find the first occurrence of the target
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result[0] = i;
                break;  // Stop the loop once the first occurrence is found
            }
        }

        // Find the last occurrence of the target
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] == target) {
                result[1] = i;
                break;  // Stop the loop once the last occurrence is found
            }
        }

        return result;
    }
};
