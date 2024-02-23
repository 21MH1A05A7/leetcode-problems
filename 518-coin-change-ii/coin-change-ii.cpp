class Solution {
public:
    // int dp[100001][100001];
    int func(int ind,int n,int t,vector<int>& coins,vector<vector<int>>& dp){
        if(t<0){
            return 0;
        }
        if(t==0){
            return 1;
        }
        if(ind>=n){
            return (ind==0)?1:0;
        }
        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int left=func(ind,n,t-coins[ind],coins,dp);
        int right=func(ind+1,n,t,coins,dp);
        return dp[ind][t]=left+right;
    }



    int change(int amount, vector<int>& coins) {
        // memset(dp,-1,sizeof(dp));
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return func(0,coins.size(),amount,coins,dp);
    }
};