// class Solution {
// public:
// void subs(vector<int>& nums, vector<vector<int>>& res, vector<int>& sub, int idx) {
//         // 1 2 3 
//         int l=nums.size();
//         // bc
//         // if(idx==l){
//         //     res.push_back(sub);
//         //     return;
//         // }
//         // // rr and task
//         // // 1st choice
//         // sub.push_back(nums[idx]);
//         // subs(nums,res,sub,idx+1);
//         // // 2nd choice
//         // sub.pop_back();
//         // subs(nums,res,sub,idx+1);
// // 1 2 3
//         res.push_back(sub);
//         for(int i=idx;i<l;i++){
//             sub.push_back(nums[i]);
//             subs(nums, res, sub,i+1);
//             sub.pop_back();
//         }
//         return;
        
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int> sub;
//         vector<vector<int>> res;
//         subs(nums, res, sub, 0);
//         return res;
//     }
// };

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size(), p = 1 << n;
        vector<vector<int>> subs(p);
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < n; j++) {
                if ((i >> j) & 1) {
                    subs[i].push_back(nums[j]);
                }
            }
        }
        return subs;
    }
};
