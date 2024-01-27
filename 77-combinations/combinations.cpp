class Solution {
public:
    vector<vector<int>> v1;
    void combination(int ind,vector<int> arr,vector<int>d,int n,int g){ // g==k and n==arr.size() s= target
    if(d.size()==g){
            // sort(d.begin(),d.end());
            v1.push_back(d);
            return;
        }
            
    
    else{
        // pick
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]){
                continue;
            }
            else{
                d.push_back(arr[i]);
                combination(i+1,arr,d,n,g);
                d.pop_back();
            }
        }
    }
    
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> x;
        vector<int> arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        combination(0,arr,x,arr.size(),k);
        return v1;
    }
};