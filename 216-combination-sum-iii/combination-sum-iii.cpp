class Solution {
public:

    void func(int ind,vector<int> arr,vector<vector<int>>& res,vector<int>& ans,int k,int target){
        if(ans.size()==k){
            if(target==0){
                res.push_back(ans);
            }
            return;
        }
        else{
            for(int i=ind;i<9;i++){
                ans.push_back(arr[i]);
                target=target-arr[i];
                func(i+1,arr,res,ans,k,target);
                target+=arr[i];
                ans.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int> arr;
       for(int i=1;i<=9;i++){
           arr.push_back(i);
       } 
       vector<vector<int>> res;
       vector<int> ans;
       func(0,arr,res,ans,k,n);
       return res;
    }
};