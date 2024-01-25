class Solution {
public:
    long long func(vector<int> arr,int k){
        long long res=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=k){
                res+=(arr[i]/k);
            }
        }
        return res;
    }

    int maximumCandies(vector<int>& candies, long long k) {
        long long s=0;
        for(int i=0;i<candies.size();i++){
            s+=candies[i];
        }
        long long l=1;
        
        long long r=*max_element(candies.begin(),candies.end());
        long long ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(s/mid>=k){
                    long long res=func(candies,mid);
                    if(res>=k){
                        ans=mid;
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};