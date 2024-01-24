class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int ma=0;
        while(i<j){
            ma=max(nums[j]+nums[i],ma);
            i+=1;
            j-=1;
        }
        return ma;
    }
};