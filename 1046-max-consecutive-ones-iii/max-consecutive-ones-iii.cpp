class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int c=0;
        int i=0;
        int j=0;
        int ma=0;
        while(j<nums.size()){
            if(nums[j]==0){
                c+=1;
            }
            if(c>k){
                cout<<i<<" "<<j<<endl;
                ma=max(ma,j-i+1);
                if(nums[i]==0){
                    c-=1;
                }
                i+=1;
            }
            j+=1;
        }
        ma=max(j-i+1,ma);
        return ma-1;
    }

};