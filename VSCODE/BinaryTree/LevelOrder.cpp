class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
          vector<vector<int>>res;
       vector<int>lev;

          queue<TreeNode*>q;
          if(root==NULL){
            return res ;
          }
          q.push(root);
          
          
          while(!q.empty()){
            int s=q.size();
            lev.clear();
            for(int i=0;i<s;i++) {
               root=  q.front();
               q.pop();
             lev.push_back(root->val);
             
            
           
            if(root->left!=NULL){
             q.push(root->left);
            }
           
            if(root->right!=NULL){
                q.push(root->right);
            }
            }  
            res.push_back(lev) ;     
    }
 return res;
    }

};
