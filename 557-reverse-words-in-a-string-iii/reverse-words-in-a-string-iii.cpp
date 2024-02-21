class Solution {
public:
    string reverseWords(string s) {
        string t;
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp=s[i]+temp;
            }
            // temp+=s[i];
            else{
                t+=temp;
                t+=" ";
                temp="";
            }
        }
        if(temp.size()!=0){
            t+=temp;
        }
        return t;
    }
};