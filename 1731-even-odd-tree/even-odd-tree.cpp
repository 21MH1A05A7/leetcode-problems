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

    bool check(vector<int>& v1,int c){
        int n=v1.size();
        if(n==1){
            if(v1[0]%2==0 && c==0){
                return 1;
            }
            else if(v1[0]%2!=0 && c==1){
                return 1;
            }
            // cout<<v1[0]<<endl;
            return 0;
            
        }
        if(c==1){
            for(int i=0;i<v1.size()-1;i++){
                if(v1[i]%2==0 || v1[i]>=v1[i+1]){
                    return 0;
                }
            }
            if(n>=2 && v1[n-2]<v1[n-1] && v1[n-1]%2!=0){
                return 1;
            }
            return 0;
        }
            for(int i=0;i<v1.size()-1;i++){
                if(v1[i]%2!=0 || v1[i]<=v1[i+1]){
                    return 0;
                }
            }
            if(n>=2 && v1[n-2]>v1[n-1] && v1[n-1]%2==0){
                return 1;
            }
            return 0;
    }


    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty()){
            int k=q.size();
            int cou=0;
            vector<int> v1;
            while(cou<k){
                TreeNode* top=q.front();
                q.pop();
                v1.push_back(top->val);
                if(top->left!=NULL){
                    q.push(top->left);
                }
                if(top->right!=NULL){
                    q.push(top->right);
                }
                cou+=1;
            }
            for(int k=0;k<v1.size();k++){
                cout<<v1[k]<<" ";
            }
            cout<<endl;
            if(c%2==0){
                if(!check(v1,1)){
                    return 0;
                }
            }
            else{
                if(!check(v1,0)){
                    return 0;
                }
            }
            c+=1;
        }
        return 1;
    }
};