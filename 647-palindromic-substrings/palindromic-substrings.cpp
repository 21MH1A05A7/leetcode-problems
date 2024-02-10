class Solution {
public:

    bool palindrome(string s){
        int n=s.size();
        for(int i=0;i<=s.size()/2;i++){
            if(s[i]!=s[n-i-1]){
                return 0;
            }
        }
        return 1;
    }
    int c=0;
    void func(int ind,string& s,int n){
        if(ind==n){
            return;
        }
        for(int i=ind;i<n;i++){
            string x=s.substr(ind,i-ind+1);
            
            if(palindrome(x)){
                // cout<<x<<" ";
                c+=1;
            }
        }
        func(ind+1,s,n);
    }

    int countSubstrings(string s) {
        int n=s.size();
        func(0,s,n);
        return c;
    }
};