class Solution {
public:
    int maximumStrongPairXor(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int x=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<=min(arr[i],arr[j])){
                 x=max(x,arr[i]^arr[j]);
            }
        }
    }
    return x;
}


    
};