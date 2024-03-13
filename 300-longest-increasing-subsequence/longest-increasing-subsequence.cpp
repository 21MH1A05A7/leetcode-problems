class Solution {
public:

    int func(int ind,int n,vector<int>& arr,int& prev,vector<vector<int>>&dp){
        if(ind>=n){
            return 0;
        }
        int pick=0;
        if(dp[ind][prev+1]!=-1){
            return dp[ind][prev+1];
        }
        if(prev==-1 || arr[ind]>arr[prev]){
            pick=1+func(ind+1,n,arr,ind,dp);
        }
        int nonpick=func(ind+1,n,arr,prev,dp);
        return dp[ind][prev+1]=max(pick,nonpick);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int prev=-1;
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return func(0,n,nums,prev,dp);
    }
};