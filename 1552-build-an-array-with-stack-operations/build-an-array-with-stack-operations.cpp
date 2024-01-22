class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v1;
        int k=0;
        for(int i=1;i<=n;++i){
            if(k>=target.size()){
                break;    
            }
            v1.push_back("Push");
            if(target[k]!=i){
                v1.push_back("Pop");
            }
            else{
                k+=1;
            }
            
        }
        return v1;
    }
};