class Solution {
public:
    int maxi=0;
    void func(int i,int j,int n,int m,vector<vector<int>>& grid,int& ma,vector<vector<int>>& visited,int s){
        if(i<0 || i>n-1 || j<0 || j>m-1 || grid[i][j]==0){
            maxi=max(maxi,s);
            return;
        }
        if(visited[i][j]==0){
            visited[i][j]=1;
            func(i-1,j,n,m,grid,ma,visited,s+grid[i][j]);
            func(i+1,j,n,m,grid,ma,visited,s+grid[i][j]);
            func(i,j+1,n,m,grid,ma,visited,s+grid[i][j]);
            func(i,j-1,n,m,grid,ma,visited,s+grid[i][j]);
            visited[i][j]=0;
        }
    }

    int getMaximumGold(vector<vector<int>>& grid) {
        vector<vector<int>> visited;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            vector<int> x;
            for(int j=0;j<m;j++){
                x.push_back(0);
            }
            visited.push_back(x);
        }
        
        int s=0;
        for(int i=0;i<n;i++){ 
            for(int j=0;j<m;j++){
                int ma=0;
                if(grid[i][j]!=0){
                    func(i,j,n,m,grid,ma,visited,s);
                }
            }
        }
        
        return maxi;
    }
};