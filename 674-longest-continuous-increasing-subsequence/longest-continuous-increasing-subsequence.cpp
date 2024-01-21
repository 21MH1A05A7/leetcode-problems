class Solution {
public:
    int findLengthOfLCIS(vector<int>& arr) {
        int i=0;
        int j=0;
        int ma=0;
        int n=arr.size();
        while(j<n-1){
            if(arr[j]<arr[j+1]){
                j+=1;
            }
            else{
                ma=max(ma,j-i+1);
                j+=1;
                i=j;
            }
        }
        if(j-i+1>ma){
            ma=j-i+1;
        }
        return ma;
    }
};