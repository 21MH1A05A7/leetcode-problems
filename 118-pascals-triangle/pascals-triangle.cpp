class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v1;
        int ans=1;
        for(int i=1;i<=n;i++){
            vector<int> v={1};
            for(int j=1;j<i;j++){
                ans=ans*((i-j));
                ans=ans/j;
                v.push_back(ans);
            }
            v1.push_back(v);
            ans=1;
        }
        return v1;
    }
};