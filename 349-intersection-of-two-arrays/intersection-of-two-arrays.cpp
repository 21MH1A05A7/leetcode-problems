class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        sort(nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        set<int> st;
        vector<int> v1;

        sort(nums2.begin(),nums2.end());
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                st.insert(nums2[j]);
            }
            if(nums1[i]<nums2[j]){
                i+=1;
            }
            else{
                j+=1;
            }
        }
        for(auto ele:st){
            v1.push_back(ele);
        }
        return v1;
    }
};