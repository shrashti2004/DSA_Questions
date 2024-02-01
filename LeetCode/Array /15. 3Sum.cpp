// //Optimized Approach - O(n^2 logn + nlogn) - o(n^2 logn) time and O(n) space
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int target = 0;
//         sort(nums.begin(), nums.end());
//         set<vector<int>> s;
//         vector<vector<int>> output;
//         for (int i = 0; i < nums.size(); i++){
//             int j = i + 1;
//             int k = nums.size() - 1;
//             while (j < k) {
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if (sum == target) {
//                     s.insert({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;
//                 } else if (sum < target) {
//                     j++;
//                 } else {
//                     k--;
//                 }
//             }
//         }
//         for(auto triplets : s)
//             output.push_back(triplets);
//         return output;
//     }
// };

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());

        int numsCount = nums.size();

        for(int i = 0; i < numsCount; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }

            int k = numsCount - 1;

            for(int j = i + 1; j < numsCount; j++)
            {
                if(j > i + 1 && nums[j] == nums[j-1])
                {
                    continue;
                }

                while(k > j)
                {
                    if(nums[i] + nums[j] + nums[k] == 0) {
                        result.push_back({nums[i], nums[j], nums[k]});
                        break;
                    } else if(nums[i] + nums[j] + nums[k] > 0) {
                        k--;
                    } else {
                        break;
                    }
                }
            }
        }

        return result;
    }
};
