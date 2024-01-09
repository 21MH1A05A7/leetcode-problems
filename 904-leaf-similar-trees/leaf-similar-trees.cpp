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

    vector<int> v1;
    vector<int> v2;

    void dfs(TreeNode* root){
        if(root){
            if(root->left==NULL && root->right==NULL){
                v1.push_back(root->val);
                return;
            }
        dfs(root->left);
        dfs(root->right);
        }
        return;
    }

    
    void dfs2(TreeNode* root){
        if(root){
        if(root->left==NULL && root->right==NULL){
            v2.push_back(root->val);
            return;
        }
        dfs2(root->left);
        dfs2(root->right);
        }
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        dfs2(root2);
        if(v1.size()!=v2.size()){
            return 0;
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return 0;
            }
        }
        return 1;

    }
};