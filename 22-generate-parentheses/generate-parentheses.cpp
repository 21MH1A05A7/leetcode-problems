class Solution {
public:

    void func(int op,int cp,int n,vector<string> &s,string &x){
        if(op==n && cp==n){
            s.push_back(x);
            return;
        }
        if(op<=n){
            x.push_back('(');
            func(op+1,cp,n,s,x);
            x.pop_back();
        }
        if(cp<op){
            x.push_back(')');
            func(op,cp+1,n,s,x);
            x.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> s;
        string x;
        func(0,0,n,s,x);
        return s;
    }
};