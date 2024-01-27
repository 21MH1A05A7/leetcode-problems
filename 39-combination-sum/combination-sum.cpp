class Solution {
public:
    vector<vector<int>> v1;
    void func(int ind,vector<int> arr,int k,vector<int> x){
        if(ind==arr.size()){
            if(k==0){
                sort(x.begin(),x.end());
                v1.push_back(x);
            }
            return;
        }
        else{
            if(arr[ind]<=k){
                x.push_back(arr[ind]);
                k=k-arr[ind];
                func(ind,arr,k,x);
                x.pop_back();
                k=k+arr[ind];
            }
            func(ind+1,arr,k,x);
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> d;
        func(0,candidates,target,d);
        return v1;      
    }
};