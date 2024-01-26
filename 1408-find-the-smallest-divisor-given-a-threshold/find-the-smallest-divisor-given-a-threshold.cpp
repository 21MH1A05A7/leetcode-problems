class Solution {
public:
    int func(vector<int> arr,int mid){
        int res=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%mid==0){
                res+=arr[i]/mid;
            }
            else{
                res+=(arr[i]/mid)+1;
            }
        }
        return res;

    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int h=0;
        for(int i=0;i<nums.size();i++){
            h=max(nums[i],h);
        }
        int l=1;
        int ans=-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int res=func(nums,mid);
            if(res<=threshold){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;

    }
};