class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int ans = INT_MAX;
       
            for( int i = 0 ; i < nums.size() ; i++ ){
            if(ans > nums[i]) ans = nums[i];
        }
        return ans;
        
    //    int left = 0;
    //     int right = nums.size() - 1;

    //     while (left < right) {
    //         int mid = (left + right) / 2;

    //         if (nums[mid] < nums[right]) {
    //             right = mid;
    //         } else if (nums[mid] > nums[right]) {
    //             left = mid + 1;
    //         } else {
    //             right--;
    //         }
    //     }

    //     return nums[left];
    
    }
};
