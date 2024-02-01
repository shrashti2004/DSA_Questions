class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1;
        vector<int> v2;
        vector<int>ans;
        for(int i=0; i<n; i++)
        {
            v1.push_back(nums[i]);
        }
        for(int i=n; i<2*n; i++)
        {
            v2.push_back(nums[i]);
        }
        for(int i=0; i<n; i++)
        {
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        return ans;
    }
};

// Approach
// Vectors v1 and v2 were taken and elements till n were stored in v1 and elements from n to 2n-1 were stored in v2. vector ans were introduced and elements at indices i were stored in ans from v1 and v2. ans was returned.

// ● This is a begineer approach. However logic works here but the code is not optimised and not suitable for a large data.
