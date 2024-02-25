class Solution {
public:
    bool check(vector<int>& nums,int i,int j){
        for(int k=i;k<j;k++){
            for(int q=k+1;q<=j;q++){
                if(nums[k]&nums[q]){
                    return 0;
                }
            }
        }
        return 1;
    }

    int longestNiceSubarray(vector<int>& nums) {
        vector<int> v1;
        int i=0;
        int j=1;
        int n=nums.size();
        int ma=0;
        while(j<n){
            if(check(nums,i,j)){
                ma=max(j-i+1,ma);
                j+=1;
            }
            else{
                i+=1;
            }
        }
        if(n==1){
            return 1;
        }
        return ma;
    }
};