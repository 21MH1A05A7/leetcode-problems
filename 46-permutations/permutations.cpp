class Solution {
public:

    vector<vector<int>> v1;
    void permutate(vector<int>& nums,vector<int> &d,int a[]){
        if(d.size()==nums.size()){
            v1.push_back(d);
            return; 
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(a[i]==0){
                    d.push_back(nums[i]);
                    a[i]=1;
                    permutate(nums,d,a);
                    a[i]=0;
                    d.pop_back();
                }
            }
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> d;
        int a[nums.size()];
        for(int i=0;i<nums.size();i++){
            a[i]=0;
        }
        permutate(nums,d,a);
        
        return v1;
    }
};