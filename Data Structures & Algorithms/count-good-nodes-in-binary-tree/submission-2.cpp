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
    int dfs(TreeNode* node, int maxV){
        if(node == NULL){
            return 0;
        }

        int res = (node->val >= maxV ? 1:0);
        maxV = max(maxV, node->val);
        res += dfs(node->left, maxV);
        res += dfs(node->right, maxV);

        return res;

    }
    int goodNodes(TreeNode* root) {

        return dfs(root, root->val);

        
    }
};
