class Solution {
public:
     int func(int i,int j,int n,string& t,string& s,vector<vector<int>>& dp){
        if(i>=n || j>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(t[i]==s[j]){
            return dp[i][j]=1+func(i+1,j+1,n,t,s,dp);
        }
        return dp[i][j]=max(func(i+1,j,n,t,s,dp),func(i,j+1,n,t,s,dp));
     }

    int longestPalindromeSubseq(string s) {
        int i=0;
        int j=0;
        int n=s.size();
        string t=s;
        reverse(s.begin(),s.end());
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return func(i,j,n,t,s,dp);
    }
};