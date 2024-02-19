class Solution {
public:
    int c=0;
    int dp[10001];
    bool func(int ind,vector<int>&nums){
        if(ind>=nums.size()-1){
            return 1;
        }
        if(nums[ind]==0){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        for(int i=1;i<=nums[ind];i++){
            if(func(ind+i,nums)){
                return dp[ind]=1;
            }
        }
        return dp[ind]=0;
    }

    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        if(nums.size()==1){
            return 1;
        }
        return func(0,nums);
        // return (c==1);
    }
};