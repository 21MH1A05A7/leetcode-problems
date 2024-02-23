class Solution {
public:
    
    int func(int ind,int t,vector<int>& coins,int& n,vector<int>& v,vector<vector<int>>& dp){
        if(t==0){
            return 0;
        }
        
        if(t<0){
            return 10001;
        }

        if(ind==n){
            // cout<<t<<endl;    
            if(t==0){
                return 0;
            }
            return 10001;
        }
        if(dp[ind][t]!=-1){
            return dp[ind][t];
        }
        int left=1+func(ind,t-coins[ind],coins,n,v,dp);
        int right=func(ind+1,t,coins,n,v,dp);
        // cout<<min(left,right)<<endl;
        return dp[ind][t]=min(left,right);
    }


    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        // memset(dp,-1,sizeof(dp));
        vector<int> v;
        int a=func(0,amount,coins,n,v,dp);
        if(a==10001){
            return -1;
        }
        else{
            return a;
        }
    }
};