class Solution {
public:
    int dp[1001][1001];
    int func(int i,int j,int n,int m){
        if(j==m || i==n || i<0 || j<0){
            return 0;
        }
        if(i==n-1 && j==m-1){
            return 1;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int right=func(i,j+1,n,m);
        int down=func(i+1,j,n,m);
        return dp[i][j]=right+down;
    }

    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,m,n);
    }
};