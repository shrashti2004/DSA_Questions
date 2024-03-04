class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(arr1[arr1.size()-1]>arr2[arr2.size()-1]){
                arr1.push_back(nums[i]);
            }
            else{
                arr2.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(auto it:arr1){
            ans.push_back(it);
        }
        for(auto it:arr2){
            ans.push_back(it);
        }
        return ans;
    }
};
