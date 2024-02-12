class Solution {
public:
int dp[10001];
int ma=0;
    int func(int ind,vector<int>& nums,int s){
        if(ind>=nums.size()){
            // cout<<s<<" ";
            // ma=max(ma,s);
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int left=nums[ind]+func(ind+2,nums,s+nums[ind]);
        int right=func(ind+1,nums,s);
        return dp[ind]=max(left,right);
    }

    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return func(0,nums,0);
    }
};