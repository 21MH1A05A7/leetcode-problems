class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                s1.push(s[i]);
            }
            else{
                if(!s1.empty()){
                    s1.pop();
                }
                
            }
        }
        string t1;
        string t2;
        while(!s1.empty()){
            char x=s1.top();
            s1.pop();
            t1=t1+x;
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                s2.push(t[i]);
            }
            else{
                if(!s2.empty()){
                    s2.pop();
                }
                
            }
        }
        while(!s2.empty()){
            char x=s2.top();
            s2.pop();
            t2=t2+x;
        }
        if(t1==t2){
            return 1;
        }
        return 0;
    }
};