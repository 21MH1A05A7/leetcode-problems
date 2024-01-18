class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            char x=tolower(s[i]);
            if(s[i]!=x){
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    if(x==st.top()){
                        st.pop();
                    }
                    else{
                        st.push(s[i]);
                    }
                    
                }
            }
            else{
                int y=st.top();
                if(st.empty()){
                    st.push(s[i]);
                }
                else{
                    char c=tolower(st.top());
                    if(c!=st.top()){
                        if(c==s[i]){
                            st.pop();
                        }
                        else{
                            st.push(s[i]);
                        }
                    }
                    else{
                        st.push(s[i]);
                    }
                }
            }
        }
        string x;
        while(!st.empty()){
            char y=st.top();
            x=y+x;
            st.pop();
        }
        return x;
    }
};