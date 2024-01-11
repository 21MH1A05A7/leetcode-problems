class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> v1={nums[0]};
        int s=nums[0];
        for(int i=1;i<nums.size();i++){
            s+=nums[i];
            v1.push_back(s);
        }
        return v1;
    }
};