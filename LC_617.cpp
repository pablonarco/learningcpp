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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1 && root2) return root2;
        
        if(root1 && root2){
            root1->val = root1->val + root2->val;
            
            if(!root1->left && root2->left){
                root1->left = root2->left;
                root2->left = NULL;
            }
            
            if(root2->left) mergeTrees(root1->left, root2->left);
            
            if(!root1->right && root2->right){
                root1->right = root2->right;
                root2->right = NULL;
                return root1;
            }
            
            mergeTrees(root1->right, root2->right);
            
        }
        
        return root1;
    }
};