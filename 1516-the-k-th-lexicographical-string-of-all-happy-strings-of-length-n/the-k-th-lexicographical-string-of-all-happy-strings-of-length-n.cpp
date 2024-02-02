class Solution {
public:
    void func(int n,int k,vector<string>& v1,string& x,vector<char>& s){
        if(x.size()==n){
            v1.push_back(x);
            return;
        }
        else{
            for(int i=0;i<s.size();i++){
                if(x.size()==0 || s[i]!=x[x.size()-1]){
                    // cout<<s[i]<<endl;
                    x+=(s[i]);   
                    func(n,k,v1,x,s);
                    // cout<<x<<endl;
                    x.pop_back();
                }
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string> v1;
        string x;
        vector<char> s={'a','b','c'};
        func(n,k,v1,x,s);
        if(v1.size()<k){
            return "";
        }
        return v1[k-1];
    }
};