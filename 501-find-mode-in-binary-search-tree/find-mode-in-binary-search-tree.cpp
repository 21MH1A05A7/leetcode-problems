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
    // set<int> s;
    // void func1(TreeNode* root){
    //     if(root==NULL){
    //         return;
    //     }
    //     s.insert(root->val);
    //     func1(root->left);
    //     func1(root->right);
    // }
    unordered_map<int,int> mp;
    int ma=0;
    void func(TreeNode* root){
        if(root==NULL){
            return;
        }
        func(root->left);
        mp[root->val]++;
        ma=max(ma,mp[root->val]);
        func(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        func(root);
        vector<int> v1;
        for(auto ele:mp){
            if(ele.second==ma){
                v1.push_back(ele.first);
            }
        }
        return v1;
    }
};