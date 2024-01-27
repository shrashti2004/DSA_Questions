// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
// //         int lsf = INT_MAX; // least so far
// //         int op = 0; // overall profit
// //         int pist = 0; // profit if sold today
        
// //         for(int i = 0; i < prices.size(); i++){
// //             if(prices[i] < lsf){ // if we found new buy value which is more smaller then previous one
// //                 lsf = prices[i]; // update our least so far
// //             }
// //             pist = prices[i] - lsf; // calculating profit if sold today by, Buy - sell
// //             if(op < pist){ // if pist is more then our previous overall profit
// //                 op = pist; // update overall profit
// //             }
// //         }
// //         return op; // return op 
// //     }
// // };
#include <vector>
#include <algorithm>  // Include this header for std::min and std::max

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int maxProfit = 0;
        int minSoFar = prices[0];

        for (int i = 0; i < prices.size(); ++i) {
            minSoFar = std::min(minSoFar, prices[i]);
            int profit = prices[i] - minSoFar;
            maxProfit = std::max(maxProfit, profit);
        }

        return maxProfit;
    }
};
