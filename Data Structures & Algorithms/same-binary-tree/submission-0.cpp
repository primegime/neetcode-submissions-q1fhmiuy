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
    void preorder(TreeNode* root, vector<int>& ans){
        if(root == NULL)
        {ans.push_back(101);
        return;
        }
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> a1;
        vector<int> a2;
        preorder(p,a1);
        preorder(q,a2);
        return a1 == a2;
    }
};
