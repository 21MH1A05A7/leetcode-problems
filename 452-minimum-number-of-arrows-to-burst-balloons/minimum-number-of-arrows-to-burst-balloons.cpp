class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        for(int i=0;i<points.size();i++){
            cout<<points[i][0]<<" "<<points[i][1]<<endl;
        }
        int i=0;
        int j=1;
        int c=1;
        int m=points[0][1];
        while(j<points.size()){
            if(m>=points[j][0]){
                m=min(m,points[j][1]);
                j+=1;
            }
            else{
                c+=1;
                i=j;
                j+=1;
                m=points[i][1];
            }
        }   
        return c;
    }
};