class Solution {
public:
    int minSteps(string s, string t) {
        map<int,int> m1;
        map<int,int> m2;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            m2[t[i]]++;
        }
        int c=0;
        for(auto ele:m2){
            if(m1.find(ele.first)==m1.end()){
                c+=ele.second;
            }
            else{
                if(m1[ele.first]<ele.second){
                    c+=(ele.second-m1[ele.first]);
                }
            }
        }
        return c;
    }
};