class Solution {
public:

    string func(string st){
        map<char,int> mp;
        int c=1;
        for(int i=0;i<st.size();i++){
            mp[st[i]]=c;
            c+=1;
        }
        string t;
        for(int i=0;i<st.size();i++){
            t+=(to_string(mp[st[i]]));
        }  
        return t;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        map<char,int> mp;
        // vector<int> v1;
        int c=1;
        for(int i=0;i<pattern.size();i++){
            mp[pattern[i]]=c;
            c+=1;
        }
        string t;
        for(int i=0;i<pattern.size();i++){
            t+=(to_string(mp[pattern[i]]));
        }     
        vector<string> v1;
        for(int i=0;i<words.size();i++){
            // string st;
            string temp=func(words[i]);
            if(t==temp){
                v1.push_back(words[i]);
            }
        }
        return v1;
    }
};