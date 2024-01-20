class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        vector<int> v1(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    v1[i]=max(v1[i],v1[j]+1);
                }
            }
        }
        int c=*max_element(v1.begin(),v1.end());
        return c;
    }
};