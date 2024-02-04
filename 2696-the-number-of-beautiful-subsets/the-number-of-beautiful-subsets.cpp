class Solution {
public:
    void func(int ind,vector<int>& nums,int k,vector<int>& temp,int n,int& c){
        if(ind>=n){
            // for(int i=0;i<temp.size();i++){
            //     cout<<temp[i]<<" "; 
            // }
            // cout<<endl;
            if(temp.size()!=0){
                c+=1;
            }
            return;
        }
        int f=0;
        if(temp.size()>0){
            for(int i=0;i<temp.size();i++){
                if(abs(nums[ind]-temp[i])!=k){
                    f+=1;
                }
            }
        }
        if(temp.size()==0 || f==temp.size()){
            temp.push_back(nums[ind]);
            func(ind+1,nums,k,temp,n,c);
            temp.pop_back();
        }
        func(ind+1,nums,k,temp,n,c);
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        vector<int> temp;
        int n=nums.size();
        int c=0;
        sort(nums.begin(),nums.end());
        func(0,nums,k,temp,n,c);
        return c;
    }
};