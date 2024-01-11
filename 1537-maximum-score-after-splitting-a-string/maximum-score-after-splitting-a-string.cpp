class Solution {
public:
    int maxScore(string s) {
       int c=0;
       int cu=0;
       int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                c+=1;
            }
        }
        int m=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                cu+=1;
            }
            int rem=(n-i-1); //1
            int remones=(rem-(c-cu)); //0
            m=max(m,cu+remones);
        }
        return m;
    }
};