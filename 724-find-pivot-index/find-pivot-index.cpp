class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        int prefix=0;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            if((s-prefix)==(prefix-nums[i])){
                return i;
            }
        }
        return -1;
    }
};