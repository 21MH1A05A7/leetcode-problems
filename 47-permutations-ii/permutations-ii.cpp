class Solution {
public:
    map<vector<int>,int> m1;
    void perm(vector<int>& nums,int n,int d[],vector<int> x){
        if(x.size()==n){
            m1[x]++;
            return;
        }
        else{
            for(int i=0;i<n;i++){
                if(d[i]==0){
                    x.push_back(nums[i]);
                    d[i]=1;
                    perm(nums,n,d,x);
                    d[i]=0;
                    x.pop_back();
                }
                
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int d[nums.size()];
        for(int i=0;i<nums.size();i++){
            d[i]=0;
        }
        vector<int> x;
        perm(nums,nums.size(),d,x);
        vector<vector<int>> v1;
        for(auto ele:m1){
            v1.push_back(ele.first);
        }
        return v1;
    }
};