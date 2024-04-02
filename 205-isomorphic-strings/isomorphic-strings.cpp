class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        for(char c:s){
            m1[c]++;
        }
        for(char c:t){
            m2[c]++;
        }
        int x=0;
        map<char,char> st;
        if(s.size()==t.size()){
            int f=0;
            int x=0;
            for(int i=0;i<s.size();i++){
                if(m1[s[i]]!=m2[t[i]]){
                    return 0;
                }
                else{
                    st[s[i]]=t[i];
                }
            }

            string temp;
            for(int i=0;i<s.size();i++){
                temp+=(st[s[i]]);
            }
            if(temp==t){
                return 1;
            }
        }
        return 0;
    }
};