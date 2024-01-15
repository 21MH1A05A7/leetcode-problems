class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // vector<vector<int>> v1;
        map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<matches.size();i++){
            for(int j=0;j<matches[0].size();j++){
                if(j==0){
                    m1[matches[i][j]]++;
                }
                else{
                    m2[matches[i][j]]++;
                }
            }
        }
        vector<int> win;
        vector<int> lose;
        for(auto ele:m1){
            if(m2.find(ele.first)==m2.end()){
                win.push_back(ele.first);
            }
        }
        for(auto ele:m2){
            if(ele.second==1){
                lose.push_back(ele.first);
            }
        }

        return {win,lose};
    }

};