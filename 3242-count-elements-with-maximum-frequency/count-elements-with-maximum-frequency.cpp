class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> mp;
        int c=0;
        int m=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>m){
                m=mp[nums[i]];
                c=0;
            }
            if(mp[nums[i]]==m){
                // cout<<nums[i]<<" ";
                c+=m;
            }
        }
        return c;
    }
};