class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                char x=st.top();
                if(x==s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }   
        string k;
        while(!st.empty()){
            char y=st.top();
            k=y+k;
            st.pop();
        }
        return k;
    }
};