class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       deque<int> dq;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
           if(!dq.empty() && (i-dq.front())>=k){
               dq.pop_front();
           }
           while(!dq.empty() && nums[i]>nums[dq.back()]){
               cout<<nums[dq.back()]<<endl;
               dq.pop_back();
           }
           dq.push_back(i);
           if(!dq.empty() && i>=(k-1)){
               ans.push_back(nums[dq.front()]);
           } 
    }
    return ans;
    }
};