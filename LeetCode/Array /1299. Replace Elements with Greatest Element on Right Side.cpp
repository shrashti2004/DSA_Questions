class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int maxi = -1;
        int n = arr.size();

        vector<int>ans(n);

        for(int i = n-1; i>=0; i--){
         ans[i] = maxi;
         maxi = max(arr[i], maxi);
        }
        
        return ans;
    }
};


// // Reversal order
// class Solution {
// public:
//     vector<int> replaceElements(vector<int>& arr) {
//         int greatest = -1;
//         for (int i = arr.size() - 1; i >= 0; i--) {
//             int temp = arr[i];
//             arr[i] = greatest; 
//     // Replace the current element with the greatest element on its right side.
//             if (temp > greatest) {
//                 greatest = temp;
//             }
//         }
//         return arr;
//     }
// };
