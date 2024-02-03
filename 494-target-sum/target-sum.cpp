class Solution {
public:
    void func(int ind,vector<int>& nums,int target,int& c,int s,int n){
        if(ind==n){
            if(s==target){
                c+=1;
            }
            return;
        }
        // cout<<s<<endl;
        // s=s+nums[ind];
        func(ind+1,nums,target,c,s + nums[ind],n);
        // s=s-nums[ind];
        func(ind+1,nums,target,c,s - nums[ind],n);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int c=0;
        int n=nums.size();
        int s=0;
       func(0,nums,target,c,s,n);
       return c; 
    }
};