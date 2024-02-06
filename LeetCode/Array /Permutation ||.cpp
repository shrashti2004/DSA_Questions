class Solution {
public:
    // Method 1 - using STL TC = O(N*N!)
    // vector<vector<int>> permuteUnique(vector<int>& nums) {
    //     vector<vector<int>> ans;
    //     // sort vector first
    //     sort(begin(nums), end(nums));

    //     // to handle duplicates
    //     set<vector<int>> s;

    //     // store initial permutation
    //     s.insert(nums);

    //     while(next_permutation(begin(nums),end(nums)) ){
    //         s.insert(nums);
    //     }


    //     for(auto &x : s){
    //         ans.push_back(x);
    //     }

    //     return ans;
    // }



    // Method 2 - using bATCKTRACKING TC = O(N*N!)

    void solve(vector<int>& nums, int i, set<vector<int>> &s){
        // BC 
        if(i>= nums.size()){
            s.insert(nums);
            return ;
        }

        // loop j = i to n-1 and swap to try all positions
        for(int j = i ; j < nums.size(); j++){

            // swap
            swap(nums[i],nums[j]);

            // RC
            solve(nums, i+1,s);

            // Backtracking
            swap(nums[i], nums[j]);
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
        // use set to remove duplicates
        set<vector<int>> s;
        vector<vector<int>> ans;
        int i = 0;
        solve(nums,i,s);

        for(auto &x : s){
            ans.push_back(x);
        }
        return ans;
    }
};
