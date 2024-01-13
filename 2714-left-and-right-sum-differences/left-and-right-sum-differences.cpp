class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> v1;
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int abso=abs((s-prefix)-(prefix-nums[i]));
            v1.push_back(abso);
        }
        return v1;
    }
};