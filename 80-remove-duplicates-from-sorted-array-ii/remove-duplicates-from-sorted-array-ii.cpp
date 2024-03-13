class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=1;
        int n=nums.size();
        vector<int> v1;
        while(j<n){
            if(nums[i]==nums[j]){
                j+=1;
            }
            else{
                if((j-i)>=2){
                    v1.push_back(nums[i]);
                    v1.push_back(nums[i]);
                }
                else{
                    v1.push_back(nums[i]);
                }
                i=j;
                j+=1;
            }
        }
        if(i<n){
            if((j-i)==1){
                v1.push_back(nums[i]);
            }
            else{
                v1.push_back(nums[i]);
                v1.push_back(nums[i]);
            }
        }
        nums=v1;
        return v1.size();
    }
};