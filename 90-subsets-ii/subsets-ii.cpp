class Solution {
public:
    void func(int ind,int n,vector<int>& v,vector<vector<int>>& v1,set<vector<int>>& st,vector<int>& nums){
        if(ind>=n){
            vector<int>temp=v;
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }
        v.push_back(nums[ind]);
        func(ind+1,n,v,v1,st,nums);
        v.pop_back();
        func(ind+1,n,v,v1,st,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> v1;
        set<vector<int>> st;
        vector<int> v;
        func(0,nums.size(),v,v1,st,nums);
        for(auto i:st){
            v1.push_back(i);
        }
        return v1;
    }
};