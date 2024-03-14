class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
        int n=arr.size();
        int s=0;
        int k=0;
        vector<int> v1;
        for(int i=0;i<n;i++){
            s+=arr[i];
            v1.push_back(s);
        }
        for(int i=0;i<n;i++){
            cout<<v1[i]<<" ";
        }
        for(int i=0;i<n;i++){
            if(v1[i]>=goal){
                if(v1[i]==goal){
                    k+=1;
                }
                int j=0;
                while(j<i){
                    if((v1[i]-v1[j])==goal){
                        k+=1;
                    }
                    j+=1;
                }
                // cout<<v1[i]<<" "<<k<<endl;
            }
        }
        return k;
    }
};