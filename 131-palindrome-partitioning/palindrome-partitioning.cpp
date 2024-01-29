class Solution {
public:

    bool palindrome(string s){
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i+=1;
                j-=1;
            }
            else{
                return 0;
            }
        }
        return 1;
    }

    vector<vector<string>> v1;
    void func(int ind,string s,int n,vector<string>& v){
        if(ind==n){
            v1.push_back(v);
            return;
        }
        else{
            for(int i=ind;i<n;i++){
                string x=s.substr(ind,i-ind+1);
                if(palindrome(x)){
                    v.push_back(x);
                    func(i+1,s,n,v);
                    v.pop_back();
                }
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<string> st;
        func(0,s,n,st);
        return v1;
    }
};