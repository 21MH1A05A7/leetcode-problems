class Solution {
public:

    bool check(vector<string>& v1,string x){
        for(int i=0;i<v1.size();i++){
            if(x==v1[i]){
                return 1;
            }
        }
        return 0;
    }

    bool se(vector<vector<string>>& arr,int n){
        int c=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++){
                c+=arr[i][j].size();
            }
        }
        if(c==n){
            return 1;
        }
        return 0;
    }

    // bool t=false;

    bool func(int ind,int n,string s,vector<string>& v1,vector<string>& v,vector<vector<string>>&arr,vector<vector<int>>& dp){
        if(ind==n){
            arr.push_back(v);
            return se(arr,n);
        }
        if(dp[ind][v.size()]!=-1){
            return dp[ind][v.size()];
        }
        bool cond=false;
        for(int i=ind;i<n;i++){
            string x=s.substr(ind,i-ind+1);
            if(check(v1,x)){
                v.push_back(x);
                cond=(cond||func(i+1,n,s,v1,v,arr,dp));
                v.pop_back();
            }
        }
        return dp[ind][v.size()]=cond;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        vector<vector<string>> arr;
        vector<string> v;
        return func(0,n,s,wordDict,v,arr,dp);
        
    }
};