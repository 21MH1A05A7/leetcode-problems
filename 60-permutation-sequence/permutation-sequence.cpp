class Solution {
public:
    vector<string> k1;
    int c=0;
    void perm(vector<int> visit,int n,vector<int> x,vector<int> arr,int k){
        if(x.size()==n){
            string s;
            for(int j=0;j<x.size();j++){
                s+=to_string(x[j]);
            }
            k1.push_back(s);
            c+=1;
            return;
        }
        else{
            if(c==k){
                return;
            }
            for(int i=0;i<n;i++){
                if(visit[i]==0){
                    x.push_back(arr[i]);
                    visit[i]=1;
                    perm(visit,n,x,arr,k);
                    visit[i]=0;
                    x.pop_back();
                }
            }
        }
    }

    string getPermutation(int n, int k) {
        string s;
        for(int i=0;i<n;i++){
            s+=(to_string(i+1));
        }
        k=k-1;
        while(k){
            next_permutation(s.begin(),s.end());
            k--;
        }
        return s;
    }
};