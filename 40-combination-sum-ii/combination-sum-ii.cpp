class Solution {
public:
    vector<vector<int>> v1;
    void combination(int ind,vector<int> arr,int s,vector<int>d,int n){
        if(s==0){
            // sort(d.begin(),d.end());
            v1.push_back(d);
            return;    
        }
    else{
        // s-=arr[ind];
        for(int i=ind;i<n;i++){
            // d.push_back(arr[ind]);
            if(i>ind && arr[i]==arr[i-1]){
                continue;
            }
            if(s>0){
                d.push_back(arr[i]);
                combination(i+1,arr,s-arr[i],d,n);
                d.pop_back();
            }
            // else break;
        }
     }
    
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> d;
        sort(candidates.begin(),candidates.end());
        combination(0,candidates,target,d,candidates.size());
        vector<vector<int>> res;
        
        for(auto ele:v1){
            res.push_back(ele);
        }
        return res;
    }
};