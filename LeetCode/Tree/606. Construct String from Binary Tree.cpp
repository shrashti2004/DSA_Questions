/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string ans = ""; // Variable to store the final string representation of the tree

    // Helper function to perform preorder traversal of the tree and construct the string
    void pre(TreeNode* root) {
        if (root == nullptr) {
            return; // Base case: If the node is null, return
        }

        // Append the current node's value to the string
        ans += to_string(root->val);

        // If the current node has a left child or a right child, include parentheses
        if (root->left != nullptr || root->right != nullptr) {
            ans += "(";
            pre(root->left); // Recursive call to process the left subtree
            ans += ")";
        }

        // If the current node has a right child, include parentheses
        if (root->right != nullptr) {
            ans += "(";
            pre(root->right); // Recursive call to process the right subtree
            ans += ")";
        }
    }

    // Main function to convert the binary tree to the required string format
    string tree2str(TreeNode* root) {
        pre(root); // Call the helper function to construct the string
        return ans; // Return the final string representation of the tree
    }
};

