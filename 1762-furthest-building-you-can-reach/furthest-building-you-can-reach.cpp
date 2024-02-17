class Solution {
public:
    int furthestBuilding(vector<int>& nums, int bricks, int ladders) {
        int i=1;
        // int c=-0;
        int s=0;
        priority_queue<int> q;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                int x=abs(nums[i]-nums[i+1]);
                s+=x;
                q.push(x);
                if(s>bricks){
                    if(ladders==0){
                        return i;
                    }
                    else{
                        ladders-=1;
                        s=s-q.top();
                        q.pop();
                    }
                }
            }
        }
        return nums.size()-1;

    }
};