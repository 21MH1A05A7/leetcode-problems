class Solution {
public:
    int func(int ind,int n,int target,vector<int>&nums,vector<int>& dp){
        if(ind==n-1){
            return 0;
        }
        if(ind>=n){
            return -1;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int ans=INT_MIN;
        for(int i=ind+1;i<n;i++){
            if(abs(nums[i]-nums[ind])<=target){
                ans=dp[ind]=max(ans,1+func(i,n,target,nums,dp));
            }
        }
        return ans;
    }

    int maximumJumps(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        int k=func(0,n,target,nums,dp);
        if(k<0){
            return -1;
        }
        if(k==INT_MIN){
            return -1;
        }
        return k;
    }
};