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
    
    vector<int> postorder;
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        
        if(root == NULL){
            return postorder;
        }
        
        postorderTraversal(root->left);
        
        postorderTraversal(root->right);
        
        postorder.push_back(root->val);
        
        return postorder;
    }
};