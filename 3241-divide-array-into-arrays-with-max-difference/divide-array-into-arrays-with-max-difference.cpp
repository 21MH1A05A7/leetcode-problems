class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        // for(auto ele:nums){
        //     cout<<ele<<" ";
        // }
        int i=0;
        int j=0;
        vector<vector<int>> x;
        vector<vector<int>> v1;
        vector<int> v;
        while(j<nums.size()){
            if(v.size()<3 && abs(nums[i]-nums[j])<=k){
                v.push_back(nums[j]);
                // cout<<nums[j]<<endl;
                j+=1;
            }
            else{
                if(v.size()==3){
                    v1.push_back(v);
                }
                i=j;
                j=i;
                v={};
            }
        }
        if(v.size()==3){
            v1.push_back(v);
        }
        if(v1.size()==nums.size()/3){
            return v1;
        }
        return x;
    }
};