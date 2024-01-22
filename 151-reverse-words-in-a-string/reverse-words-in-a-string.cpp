class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;
        vector<string> v1;
        string k;
        while(j<s.size()){
            if(s[j]==' '){
                if(k.size()>0){
                    v1.push_back(k);
                }
                j=j+1;
                i=j;
                k="";
            }
            else{
                k+=s[j];
                j+=1;
            }
        }
        if(k.size()>0){
            v1.push_back(k);
        }
        string x;
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            if(i!=v1.size()-1){
                x+=v1[i]+' ';
            }
            else{
                x+=v1[i];
            }
        }
        return x;
    }
};