class Solution {
public:
    int climbStairs(int n) {
        int prev=0;
        int curr=1;
        int s=0;
        for(int i=0;i<n;i++){
            s=prev+curr;
            prev=curr;
            curr=s;
        }
        return s;
    }
};