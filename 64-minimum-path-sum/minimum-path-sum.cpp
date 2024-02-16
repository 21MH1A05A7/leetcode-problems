class Solution {
public:
    int dp[201][201];
    int func(int i,int j,int n,int m,vector<vector<int>>&grid,int &mi){
        if(i==n || j==m){
            return 10000;
        }
        if(i==n-1 && j==m-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int left=grid[i][j]+func(i,j+1,n,m,grid,mi);
        int right=grid[i][j]+func(i+1,j,n,m,grid,mi);
        return dp[i][j]=min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int mi=INT_MAX;
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return func(0,0,n,m,grid,mi);
        // return a;
    }
};