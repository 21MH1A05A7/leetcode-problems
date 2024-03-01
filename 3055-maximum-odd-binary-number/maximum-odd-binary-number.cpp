class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0;
        int z=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c+=1;
            }
            else{
                z+=1;
            }
        }
        string t;
        for(int i=0;i<c-1;i++){
            t+='1';
        }
        for(int i=0;i<z;i++){
            t+='0';
        }
        t+='1';
        return t;

    }
};