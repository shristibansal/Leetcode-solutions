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
    bool PathSum(TreeNode* root, int t,int s )
    {
        if(root==NULL)
            return false;
        if(root->left ==NULL && root->right==NULL)
        {
           if(s+root->val == t)
               return true;
            else return false;
        }
        if(root->left == NULL)
            return PathSum(root->right, t,s+root->val);
        if(root->right == NULL)
            return PathSum(root->left, t,s+root->val);
        return PathSum(root->right, t,s+root->val)+PathSum(root->left, t,s+root->val);
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        return PathSum(root, targetSum,0);
    }
};