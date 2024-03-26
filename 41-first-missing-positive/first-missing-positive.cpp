class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                mp[nums[i]]++;
            }
        }
        for(int i=1;i<nums.size()+1;i++){
            mp[i]++;
            if(mp[i]==1){
                return i;
            }
        }
        return nums.size()+1;
    }
};