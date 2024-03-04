class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int> row;
        vector<int> col;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<grid.size();i++){
            int c=0;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    c+=1;
                }
            }
            row.push_back(c);
        }
        for(int i=0;i<grid[0].size();i++){
            int c=0;
            for(int j=0;j<grid.size();j++){
                if(grid[j][i]==1){
                    c+=1;
                }
            }
            col.push_back(c);
        }
        vector<vector<int>> v;
        for(int i=0;i<n;i++){
            vector<int> b;
            for(int j=0;j<m;j++){
                int res1=row[i]+col[j];
                int res2=(n-row[i])+(m-col[j]);
                int res=res1-res2;
                b.push_back(res);
            }
            v.push_back(b);
        }
        return v;
    }
};