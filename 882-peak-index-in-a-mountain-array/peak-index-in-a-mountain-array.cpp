class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(arr[mid]>arr[mid+1]){
                h=mid-1;
            }
            else if(arr[mid]<arr[mid+1]){
                l=mid+1;
            }
            // cout<<l<<" "<<h<<endl;
        }
        
        return l;
    }
};