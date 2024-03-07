class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=n-1;i>=0;i--){
            // int k=nums.size();
            for(int j=0;j<i;j++){
                s=nums[j]+nums[j+1];
                if(s>9){
                    s=s%10;
                }
                nums[j]=s;
                // cout<<nums[j]<<" ";
            }
            // cout<<nums.size()<<" ";
            // cout<<endl;
        }
        if(n==1){
            return nums[0];
        }
        return s;
    }
};