class Solution {
public:

    int func(vector<int>& piles,int k){
        long long res=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%k==0){
                res+=(piles[i]/k);
            }
            else{
                res+=(piles[i]/k)+1;
            }
        }
        return res;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        if(piles.size()==1){
            if(piles[0]<h){
                return 1;
            }
        }

        long long ma=*max_element(piles.begin(),piles.end());
        // cout<<ma<<" ";
        long long l=1;
        long long r=ma;
        long long ans=0;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long res=func(piles,mid);
            if(res<=h && res>0){
                ans=mid;
                cout<<ans<<endl;
                cout<<res<<endl;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};