class Solution {
public:
    bool closeStrings(string s1, string s2) {
        map<char,int> m1;
        map<char,int> m2;
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<s1.size();i++){
            m1[s1[i]]++;
        }
        for(int i=0;i<s2.size();i++){
            if(m1.find(s2[i])!=m1.end()){
                m2[s2[i]]++;
            }
            else{
                return 0;
            }
        }
        for(auto ele:m1){
            v1.push_back(ele.second);
        }
        for(auto ele:m2){
            v2.push_back(ele.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2){
            return 1;
        }
        return 0;
    }
};