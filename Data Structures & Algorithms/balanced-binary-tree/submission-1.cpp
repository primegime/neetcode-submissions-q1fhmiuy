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
int maxH(TreeNode* root){
    if(root == NULL)
    return 0;

    return 1 + max(maxH(root->left), maxH(root->right));
}
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return 1;
        }

        int lh  = maxH(root->left);
        int rh = maxH(root-> right);
        int k = (abs(lh-rh)<=1 ? 1:0);
        return k && isBalanced(root->left) && isBalanced(root->right);
        
    }
};
