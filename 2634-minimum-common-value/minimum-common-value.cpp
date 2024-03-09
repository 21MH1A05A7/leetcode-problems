class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int n=nums1.size();
        int m=nums2.size();
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                return nums1[i];
            }
            if(nums1[i]<nums2[j]){
                i+=1;
            }
            else{
                j+=1;
            }
        }
        return -1;
    }
};