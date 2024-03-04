class Solution {
public:
    int dp[1001][10000];
    bool func(int ind,int s,vector<int>&nums,int total){
        if(s>(total-s)){
            return 0;
        }
        if(s==(total-s)){
            return 1;
        }
        
        if(ind==nums.size()){
            if(s==(total-s)){
                return 1;
            }
            return 0;
        }
        if(dp[ind][s]!=-1){return dp[ind][s];}
        bool pick=func(ind+1,s+nums[ind],nums,total);
        bool npick=func(ind+1,s,nums,total);
        return dp[ind][s]=pick||npick;
    }



    bool canPartition(vector<int>& nums) {
        int total=0;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        return func(0,0,nums,total);
    }
};