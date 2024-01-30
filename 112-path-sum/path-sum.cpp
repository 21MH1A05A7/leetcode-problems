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
    int c=0;
    bool dfs(TreeNode* root,int k,int s){
        if(root==NULL){
            return 0;
        }
        s=s-root->val;
        if(root->left==NULL && root->right==NULL && s==0){
            return 1;
        }
        
        return (dfs(root->left,k,s) || dfs(root->right,k,s));
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return 0;
        }
        return dfs(root,0,targetSum);
    }
};