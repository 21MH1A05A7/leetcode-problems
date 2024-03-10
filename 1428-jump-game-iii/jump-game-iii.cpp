class Solution {
public:

    bool func(int ind,int& n,vector<int>& nums,vector<int>& dp,vector<int>& visited){
        if(ind<0 || ind>=n || visited[ind]==1){
            return 0;
        }
        if(nums[ind]==0){
            return 1;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        visited[ind]=1;
        return dp[ind]=(func(ind+nums[ind],n,nums,dp,visited)||func(ind-nums[ind],n,nums,dp,visited));
    }

    bool canReach(vector<int>& arr, int start) {
        
        int n=arr.size();
        vector<int> dp(n+1,-1);
        vector<int> visited(n+1,-1);
        return func(start,n,arr,dp,visited);
    }
};
        // if(ind==n-1){
        //     if(nums[ind]==0){
        //         return 1;
        //     }
        //     return 0;
        // }
        // if(ind==0){
        //     if(nums[ind]==0){
        //         return 1;
        //     }
        //     return 0;
        // }