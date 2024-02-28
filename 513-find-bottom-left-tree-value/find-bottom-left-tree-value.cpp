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
    int findBottomLeftValue(TreeNode* root) {
        int val=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int c=0;
            int k=q.size();
            val=(q.front())->val;
            while(c<k){
                TreeNode* x=q.front();
                q.pop();
                if(x->left!=NULL){q.push(x->left);}
                if(x->right!=NULL){q.push(x->right);}
                c+=1;
            }
        }
        return val;   
    }
};