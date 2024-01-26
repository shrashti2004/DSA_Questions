class Solution {
public:
 //function hai yha se
    void findcombo(int index , int target ,vector<int>& candidates, vector<vector<int>>&ans , vector<int>&ds ){
        //agar index n ke barabar hai aur is wakt target bhi 0 hogya hai
        //tb ds ko push_back krdo ans mei
        if(index==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            //nai toh simply return krjao
            return;
        }

        //agr include krne wala case aagya tb tumhe check krna hoga ki current value 
        //choti hai na target se
        if(candidates[index]<=target){
            ds.push_back(candidates[index]);
            findcombo(index , target-candidates[index] , candidates , ans , ds);
            ds.pop_back();
        }

            //not include ka case mei index ko 1 se increment krna hai
            findcombo(index+1 , target , candidates , ans , ds);
        }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

       

        //vector banao pehle
        vector<vector<int>>ans;
        vector<int>ds;
        //function ko call lgao
        findcombo(0 , target , candidates , ans  ,ds);
        return ans;
        
    }
};
// class Solution {
// public:
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int>curr;
//         vector<vector<int>>res;
//         dfs(candidates,0,target,curr,res,0);
//         return res;

//     }
// void dfs(vector<int> & candidates,int start,int target, vector<int>&curr, vector<vector<int>> & res,int sum)
//     {
//         if(sum==target)
//         {
//             res.push_back(curr);
//             return;
//         }
//         if(sum>target)
//             {
//                 return;
//             }
//         for(int i=start;i<candidates.size();i++)
//         {
//             curr.push_back(candidates[i]);
            
//             dfs(candidates,i,target,curr,res,sum+candidates[i]);
//             curr.pop_back();
//         }
//     }
// };
