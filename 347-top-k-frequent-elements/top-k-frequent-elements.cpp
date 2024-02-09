class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<int> vt;
        vector<pair<int,int>> v1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto ele:mp){
            pair<int,int> pt=make_pair(ele.second,ele.first);
            v1.push_back(pt);
        }
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        for(int i=0;i<k;i++){
            vt.push_back(v1[i].second);
        }
        return vt;
    }
};