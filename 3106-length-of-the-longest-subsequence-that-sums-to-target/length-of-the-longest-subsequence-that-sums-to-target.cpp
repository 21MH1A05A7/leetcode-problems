class Solution {
public:

    int func(int ind,int n,int t,vector<int>& nums,vector<vector<int>>&dp){
        if(t==0){
            return 0;
        }
        if(t<0){
            return -1000;
        }
        if(ind>=n){
            return (t==0?0:-1000);
        }
        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int left=1+func(ind+1,n,t-nums[ind],nums,dp);
        int right=func(ind+1,n,t,nums,dp);
        return dp[ind][t]=max(right,left);
    }

    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        int k=func(0,n,target,nums,dp);
        if(k<0){
            return -1;
        }
        return k;
    }
};