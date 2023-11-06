class Solution {
        public:
     
        int maxPath(TreeNode*root,int &result) {
        if (root == NULL) {
            return 0;
        }
    
        
        
// Recursively find the maximum path sums for the left and right subtrees
       
        int left = maxPath(root->left,result);
        int right = maxPath(root->right,result);
        
// Case 1: Straight path
// Calculate the maximum straight path sum for the current node

        int m_s = max(max(left, right) + root->val, root->val);
        
// Case 2: Curved path
// Calculate the maximum path sum that may include both left and right subtrees
        
        int m_c = max(m_s, left + right + root->val);
        
 // Update 'result' with the maximum path sum seen so far
        result = max(result, m_c);
       
        return m_s ;
       
        }

int maxPathSum(TreeNode* root) {
        // Initialize 'result' to INT_MIN
         int result = INT_MIN;
        maxPath(root,result);
        return result;
    
     }
};
