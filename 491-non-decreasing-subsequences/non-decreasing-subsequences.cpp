class Solution {
public:
    void func(int ind,vector<int>& nums,set<vector<int>>& res,int n,vector<int>& ans){
        if(ind==n){
            if(ans.size()>1){
                res.insert(ans);
            }
            
            return;
        }
        // for(int i=ind;i<n;i++){
            if(ans.size()==0 || ans[ans.size()-1]<=nums[ind]){
                ans.push_back(nums[ind]);
                func(ind+1,nums,res,n,ans);
                ans.pop_back();
            }
            func(ind+1,nums,res,n,ans);
        // }
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        set<vector<int>> res;
        func(0,nums,res,n,ans);
        vector<vector<int>> result;
        for(auto ele:res){
            result.push_back(ele);
        }
        return result;
    }
};