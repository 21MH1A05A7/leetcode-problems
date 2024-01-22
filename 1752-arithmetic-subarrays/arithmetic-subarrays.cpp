class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> v1;
        for(int i=0;i<l.size();i++){
            int c=0;
            vector<int> v;
            for(int j=l[i];j<=r[i];j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            if(v.size()<=2){
                v1.push_back(1);
            }
            else{
                int diff=v[1]-v[0];
                for(int j=2;j<v.size();j++){
                    if(v[j]-v[j-1]==diff){
                        c+=1;
                    }
                }
                if(c==v.size()-2){
                    v1.push_back(1);
                }
                else{
                    v1.push_back(0);
                }
            }
            
        }
        return v1;
    }
};