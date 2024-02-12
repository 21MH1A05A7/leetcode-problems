class Solution {
public:
    int dp[101];
    int func(int ind,int n,vector<int>& nums){
        if(ind>=n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int left=nums[ind]+func(ind+2,n,nums);
        int right=func(ind+1,n,nums);
        return dp[ind]=max(left,right);
    }
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        if(nums.size()==1){
            return nums[0];
        }
        vector<int> t1;
        vector<int> t2;
        for(int i=0;i<nums.size();i++){
            if(i!=0){
                t1.push_back(nums[i]);
            }
            if(i!=nums.size()-1){
                t2.push_back(nums[i]);
            }
        }
        int m1=func(0,t1.size(),t1);
        memset(dp,-1,sizeof(dp));
        return max(m1,func(0,t2.size(),t2));
    }
};