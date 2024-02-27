class Solution {
public:

    // int func(int ind,vector<int>& nums,int n){
    //     if(ind==n){
    //         return 1;
    //     }
    //     int res=0;
    //     for(int i=ind;i<n;i++){
    //         cout<<nums[i]<<" ";
    //         res=nums[i]*func(i+1,nums,n);
    //     }

    //     return res;
    // }


    int maxProduct(vector<int>& nums) {
        int i=0;
        int j=1;
        int maxi=0;
        int ma=nums[i];
        while(i<nums.size()-1){
            if(j==nums.size()){
                i+=1;
                j=i+1;
                ma=nums[i];
            }
            else{
                maxi=max(ma,maxi);
                ma=ma*nums[j];
                maxi=max(ma,maxi);
                j+=1;
            }
        }
        
        // cout<<maxi<<" ";
        if(nums.size()==1){
            return nums[0];
        }
        return max(maxi,nums[i]);  
    }
};