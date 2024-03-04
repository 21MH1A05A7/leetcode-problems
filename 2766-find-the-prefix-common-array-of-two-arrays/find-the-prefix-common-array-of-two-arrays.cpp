class Solution {
public:
    int func(vector<int>arr,vector<int> brr,int n){
        int c=0;
        // for(int i=0;i<n+1;i++){
        //     cout<<brr[i]<<" "; 
        // }
        for(int i=0;i<n+1;i++){
            if(find(brr.begin(),brr.begin()+n+1,arr[i])!=brr.begin()+n+1){
                c+=1;
            }
        }
        cout<<endl;
        return c;
    }

    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> v;
        int n=A.size();
        for(int i=0;i<n;i++){
            v.push_back(func(A,B,i));
        }
        // if(A[0]!=B[0]){
        //     v[0]=v[0]-1;
        // }
        return v;
    }
};