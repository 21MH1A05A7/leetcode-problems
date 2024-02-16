class Solution {
public:
    int dp[1001][1001];
    int func(int i,int j,int n,int m,vector<vector<int>>& grid){
        if(i>=n){
            return 10000;    
        }
        if(i==n-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int r1=grid[i][j]+func(i+1,j,n,m,grid);
        int r2=grid[i][j]+func(i+1,j+1,n,m,grid);
        return dp[i][j]=min(r1,r2);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        int m=triangle[0].size();
        memset(dp,-1,sizeof(dp));
        return func(0,0,n,m,triangle);
    }
};