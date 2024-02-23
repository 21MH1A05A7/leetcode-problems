class Solution {
public:
    // int mi=INT_MAX;
    int func(int src,int dst,int k,vector<pair<int,int>> adj[],vector<int>& visited,vector<vector<int>>& dp){
        if(k<0){
            return 1e9;
        }
        if(src==dst){
            return 0;
        }
        if(k==0){
            if(src==dst){
                return 0;
            }
            return 1e9;
        }
        
        visited[src]=1;
        int rec=1e9;
        if(dp[src][k]!=-1){
            return dp[src][k];
        }
        for(auto ele:adj[src]){
            rec=min(rec,ele.second+func(ele.first,dst,k-1,adj,visited,dp));
        }
        return dp[src][k]=rec;
    }


    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) { 
        vector<pair<int,int>> adj[n+1];
        
        vector<vector<int>> dp(n+1,vector<int>(k+2,-1));
    
        for(int i=0;i<flights.size();i++){
            int from=flights[i][0];
            int to=flights[i][1];
            int weight=flights[i][2];
            adj[from].push_back({to,weight});
        }
        
        vector<int> visited(n+1,0);
        
        
        int ans=func(src,dst,k+1,adj,visited,dp);
        if(ans==1e9){
            return -1;
        }
        return ans;

    }
};