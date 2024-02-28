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
    int res=0;
    void func(TreeNode* root,int l,int& m){
        if(root==NULL){
            return;
        }
        if(l>m){
            m=l;
            res=root->val;
        }
        func(root->left,l+1,m);
        func(root->right,l+1,m);
    }

    int findBottomLeftValue(TreeNode* root) {
        int m=0;
        if(root->left==NULL && root->right==NULL){
            return root->val;
        }
        func(root,0,m);
        return res;
    }
};