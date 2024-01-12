class Solution {
public:
    bool halvesAreAlike(string s) {
        int c=0;
        for(int i=0;i<s.size();i++){
            char k=tolower(s[i]);
            if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
                c+=1;
            }
        }
        int len=s.size()/2;
        int fc=0;
        for(int i=0;i<len;i++){
            char k=tolower(s[i]);
            if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
                fc+=1;
            }
        }
        if(fc==(c-fc)){
            return 1;
        }
        return 0;
    }
};