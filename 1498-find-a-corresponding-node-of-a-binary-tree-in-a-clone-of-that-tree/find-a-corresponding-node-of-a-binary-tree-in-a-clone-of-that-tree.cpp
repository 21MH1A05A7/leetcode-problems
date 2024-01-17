/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* mi;
    void dfs(TreeNode* original,TreeNode* root,int val){
        if(root==NULL){
            return;
        }
        dfs(original,root->left,val);
        if(root->val==val){
            mi=root;
        }
        dfs(original,root->right,val);
    }

    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(original,cloned,target->val);
        return mi;
    }
};