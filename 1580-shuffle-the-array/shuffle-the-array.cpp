class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v1;
        // int mid=n;
        for(int i=0;i<n;i++){
            v1.push_back(nums[i]);
            v1.push_back(nums[n+i]);
        }
        return v1;
    }
};