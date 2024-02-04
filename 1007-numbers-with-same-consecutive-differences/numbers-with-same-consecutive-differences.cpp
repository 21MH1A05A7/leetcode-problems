class Solution {
public:
    void func(int n,int k,vector<int>& v1,int s,int c){
        if(c==n){
            v1.push_back(s);
            return;
        }
        for(int i=0;i<=9;i++){
            if(s==0 && i==0){
                continue;
            }
            if(s==0 || abs((s%10)-i)==k){
                c+=1;
                func(n,k,v1,s*10+i,c);
                c-=1;
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> v1;
        int s=0;
        int c=0;
        func(n,k,v1,s,c);
        return v1;
    }
};