class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};




// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         vector<int> nonZeroElements;

//         // Traverse the original vector and collect non-zero elements
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != 0) {
//                 nonZeroElements.push_back(nums[i]);
//             }
//         }

//         // Fill the original vector with non-zero elements
//         for (int i = 0; i < nonZeroElements.size(); i++) {
//             nums[i] = nonZeroElements[i];
//         }

//         // Fill the remaining elements with zeroes
//         for (int i = nonZeroElements.size(); i < nums.size(); i++) {
//             nums[i] = 0;
//         }
//     }
// };
