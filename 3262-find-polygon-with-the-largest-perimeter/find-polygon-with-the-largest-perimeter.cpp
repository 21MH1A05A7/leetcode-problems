class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int i=0;
        long long s=0;
        long long prev=0;
        long long c=0;
        long long ma=0;
        for(int i=0;i<nums.size();i++){
            prev=s;
            s+=nums[i];
            if(c>=2){
                if(prev>nums[i]){
                    ma=max(ma,s);
                }
            }
            c+=1;
        }
        if(ma==0){
            return -1;
        }
        return ma;
    }
};