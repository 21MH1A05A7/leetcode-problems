class Solution {
public:
    int dp[1001];
    int func(int ind,vector<int>& cost,int n){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int left=cost[ind]+func(ind+1,cost,n);
        int right=INT_MAX;
        if(ind+2<=n){
            right=cost[ind]+func(ind+2,cost,n);
        }
        return dp[ind]=min(left,right);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        int v1=func(0,cost,cost.size());
        memset(dp,-1,sizeof(dp));
        int v2=func(1,cost,cost.size());
        return min(v1,v2);   
    }
};