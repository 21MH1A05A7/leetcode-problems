class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        map<int,int> mp;
        vector<int> v;
        for(int i=0;i<score.size();i++){
            mp[score[i][k]]=i;
            v.push_back(score[i][k]);
        }
        vector<vector<int>> v1;
        sort(v.begin(),v.end());
        int n=v.size();
        for(int i=n-1;i>=0;i--){
            // v1.push_back(score[ele.second]);
            v1.push_back(score[mp[v[i]]]);
        }
        return v1;
    }
};