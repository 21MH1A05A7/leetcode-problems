class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int t=i;
            int p=j;
            while(t<n && s[t]==s[j]){
                t+=1;
            }
            if(t>=j){
                return 0;
            }
            while(p>=0 && s[i]==s[p]){
                p-=1;
            }
            i=t;
            j=p;
            if(s[i]!=s[j]){
                break;
            }
        }
        if(i<=j){
            return j-i+1;
        }
        return 0;
    }
};