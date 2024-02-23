class Solution {
public:
    // int mi=INT_MAX;
    int func(int src,int dst,int k,vector<int> adj[],pair<pair<int,int>,int>& p,vector<int>& v,vector<int>& visited,vector<vector<int>>& v1,int &s,vector<vector<int>>& dp){
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

        int rec=1e9;
        if(dp[src][k]!=-1){
            return dp[src][k];
        }
        for(auto ele:adj[src]){
                v.push_back(ele);
                rec=min(rec,v1[src][ele]+func(ele,dst,k-1,adj,p,v,visited,v1,s,dp));
                v.pop_back();
        }
        return dp[src][k]=rec;
    }


    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) { 
        vector<int> adj[n+1];
        pair<pair<int,int>,int> p;
        vector<vector<int>> dp(n+1,vector<int>(k+2,-1));
        vector<vector<int>> v1(n,vector<int>(n,0));
        for(int i=0;i<flights.size();i++){
            int from=flights[i][0];
            int to=flights[i][1];
            v1[from][to]=flights[i][2];
            adj[from].push_back(to);
            int weight=flights[i][2];
            pair<int,int> p=make_pair(from,to);
            pair<pair<int,int>,int> q=make_pair(p,weight);
        }
        vector<int> v;
        vector<int> visited(n+1,0);
        visited[src]=0;
        int s=0;
        int ans=func(src,dst,k+1,adj,p,v,visited,v1,s,dp);
        if(ans==1e9){
            return -1;
        }
        return ans;

    }
};