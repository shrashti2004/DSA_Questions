class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // TC: o(n) SC: O(1)
        int n = nums.size();
        int k = 1;
        for(int i=1; i<n; i++){
            if(nums[i] != nums[i-1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
