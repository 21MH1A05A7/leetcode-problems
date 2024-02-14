class Solution {
public:
    int dp[51][51];
    int func(int ind,vector<char>& arr,string s,int n, int k){
        if(s.size() == n) return 1;
        if(ind >= arr.size()) return 0;
        cout<<s<<" ";
        if(dp[ind][k]!=-1){
            return dp[ind][k];
        }
        int left=func(ind,arr,s+arr[ind],n, k+1);
        int right=func(ind+1,arr,s,n, k);
        return dp[ind][k] = (left+right);
    }

    int countVowelStrings(int n) {
        
        vector<char> arr={'a','e','i','o','u'};
        memset(dp,-1,sizeof(dp));
        string s = "";
        return func(0,arr,s,n, 0);
    }
};