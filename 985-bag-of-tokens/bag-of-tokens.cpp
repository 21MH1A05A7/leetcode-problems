class Solution {
public:
    int bagOfTokensScore(vector<int>& arr, int p) {
        // cout<<p<<" ";
        sort(arr.begin(),arr.end());
        
        int i=0;
        int j=arr.size()-1;
        int s=0;
        if(i==j){
            if(p>=arr[i]){
                return 1;
            }
            else{
                return 0;
            }
        }
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i]<<" ";
        // }
        int ma=0;
        while(i<=j){
            // cout<<arr[i]<<" "<<p<<endl;
            if(p>=arr[i]){
                p=(p-arr[i]);
                s+=1;
                i+=1;
                // cout<<p<<" "<<arr[i]<<endl;
            }
            else if(s>=1 && p<arr[i]){
                s-=1;
                p+=arr[j];
                j-=1;
            }
            else{
                break;
            }
            ma=max(s,ma);
        }
        // cout<<i<<" "<<j<<endl;
        return ma;
    }
};