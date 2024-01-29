class Solution {
public:
    void func(int j,string mp[],string &digi,string &res,vector<string>& ans){
        if(j>=digi.size()){
            ans.push_back(res);
            return;
        }
        else{
            int ind=digi[j]-'0';
            int len=mp[ind].size();
            for(int i=0;i<len;i++){
                res.push_back(mp[ind][i]);
                func(j+1,mp,digi,res,ans);
                res.pop_back();
            }
        }
    }

    vector<string> letterCombinations(string digits) {
        string mp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> v1;
        string x;
        if(digits.size()==0){
            return v1;
        }
        func(0,mp,digits,x,v1);
        return v1;
    }
};