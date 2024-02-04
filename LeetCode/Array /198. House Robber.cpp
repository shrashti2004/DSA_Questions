class Solution {
public:
    int rob(vector<int>& nums) {
        int prevrobbed=0;
        int prevskipped=0;
        for(int num:nums){
            int currentrobbed=prevskipped+num;
            int currentskipped=max(prevskipped,prevrobbed);

            prevrobbed=currentrobbed;
            prevskipped=currentskipped;
        }
        return max(prevrobbed,prevskipped);
    }
};
