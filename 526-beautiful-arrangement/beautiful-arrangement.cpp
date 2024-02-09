class Solution {
public:
    int c=0;
    void func(int i,int n,vector<int>& visited,vector<int>& ans,vector<int>& arr){
        if(ans.size()==n){
            // for(int i=0;i<ans.size();i++){
            //     cout<<ans[i]<<" ";
            // }
            cout<<endl;
            c+=1;
            return;
        }
        for(int ind=0;ind<n;ind++){
            if(visited[ind]==0 && (arr[ind]%(ans.size()+1)==0 ||(ans.size()+1)%arr[ind]==0)){
                visited[ind]=1;
                ans.push_back(arr[ind]);
                func(i,n,visited,ans,arr);
                visited[ind]=0;
                ans.pop_back();
            }
        }
    }

    int countArrangement(int n) {
        vector<int> visited(n,0);
        vector<int> ans;
        vector<int> arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        func(0,n,visited,ans,arr);
        return c;
    }
};