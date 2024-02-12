class Solution {
public:
int dp[1001][1001];
    int func(int i,int j,int n,int m,vector<vector<int>>& grid){
        if(j==m || i==n || i<0 || j<0 || grid[i][j]==1){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int right=func(i,j+1,n,m,grid);
        int down=func(i+1,j,n,m,grid);
        return dp[i][j]=right+down;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,nums.size(),nums[0].size(),nums);

    }
};