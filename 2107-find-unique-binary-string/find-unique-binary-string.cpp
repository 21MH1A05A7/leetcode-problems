class Solution {
public:
    void func(int ind,vector<string>& v1,int n,string& s,vector<string>& res){
        if(s.size()==n){
            res.push_back(s);
            return;
        }
        s.push_back('0');
        func(ind,v1,n,s,res);
        s.pop_back();
        s.push_back('1');
        func(ind,v1,n,s,res);
        s.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        vector<string> res;
        int n=nums.size();
        func(0,nums,n,s,res);
        sort(res.begin(),res.end());
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<n){
            if(nums[i]!=res[i]){
                return res[i];
            }
            i+=1;
        }
        return res[i];
    }
};