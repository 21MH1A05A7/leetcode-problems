class Solution {
public:

    int func(int ind,int n,vector<int>& nums,vector<int>& dp){
        if(ind>=n-1){
            return 0;
        }
        if(nums[ind]==0){return 1e9;}
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int ans=INT_MAX;
        for(int i=1;i<=nums[ind];i++){
            ans=dp[ind]=min(ans,1+func(ind+i,n,nums,dp));
        }
        return ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return func(0,n,nums,dp);   
    }
};