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
    int bfs(TreeNode* root){
        int c=0;
        if(root==NULL){
            return c;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int k=q.size();
            while(k){
                TreeNode* top=q.front();
                q.pop();

                if(top->left!=NULL){
                    q.push(top->left);
                }
                if(top->right!=NULL){
                    q.push(top->right);
                }
                k--;
            }
            c+=1;
        }
        return c;
    }
    int maxDepth(TreeNode* root) {
        return bfs(root);
    }
};