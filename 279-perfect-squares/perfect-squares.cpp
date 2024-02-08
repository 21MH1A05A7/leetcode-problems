class Solution {
public:
    int dp[100001];
    int func(int n,vector<int>& arr){
        if(n==0){
            return 0;
        }
        if(n<0){
            return 10000;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int left=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=n){
               dp[n]=left=min(left,1+func(n-arr[i],arr));   
            }
        }
        
        return dp[n];
    }

    int numSquares(int n) {
        vector<int> arr;
        memset(dp,-1,sizeof(dp));
        int sqrt=pow(n,0.5);
        if(sqrt*sqrt==n){
            return 1;
        }
        for(int i=1;i<n;i++){
            int s=pow(i,0.5);
            if(s*s==i){
                arr.push_back(i);
            }
        }
        int len=arr.size();
        return func(n,arr);
    }
};