class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v1;
        int p=1;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c+=1;
            }
            else{
                p=p*nums[i];
            }
            
        }
        for(int i=0;i<n;i++){
            if(c==0){
                v1.push_back(p/nums[i]);
            }
            else if(c==1){
                if(nums[i]==0){
                    v1.push_back(p);
                }
                else{
                    v1.push_back(0);
                }
            }
            else{
                v1.push_back(0);
            }
        }
        return v1;
    }
};