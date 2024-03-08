class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ma=0;
        int c=0;
        for(auto ele:mp){
            ma=max(ma,ele.second);
        }
        for(auto ele:mp){
            if(ele.second==ma){
                c+=ele.second;
            }
        }
        return c;
    }
};