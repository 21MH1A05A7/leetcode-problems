class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        // map<int,int> mp;
        int i=0;
        int s=0;
        int ma=-99999;
        int mi=INT_MAX;
        for(int i=0;i<=n-3;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                s=arr[i]+arr[j]+arr[k];    
                // cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                if(s==target){
                    return s;
                }
                else if(s<target){
                    ma=max(ma,s); //  maximum element less than target
                    j++;
                }
                else{
                    mi=min(mi,s); //minimum elelemt greater than target
                    k--;
                }
            }
        }
        if(abs(target-ma)<abs(mi-target)){
            return ma;
        }
        return mi;
    }
};