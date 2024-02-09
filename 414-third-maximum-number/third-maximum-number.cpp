class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
         set<int> st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        if(st.size()<3){
            return *max_element(nums.begin(),nums.end());
        }
        int c=0;
        for(int ele:st){
            if(c==st.size()-3){
                return ele;
            }
            c+=1;
        }
        return 0;
    }
};