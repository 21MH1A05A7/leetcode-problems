class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        map<char,int> m1;
        for(char st:order){
            mp[st]++;
        }
        string t;
        for(char st:s){
            m1[st]++;
        }
        for(auto ele:m1){
            if(mp[ele.first]==0){
                for(int j=0;j<ele.second;j++){
                    t+=ele.first;
                }
            }
        }
        for(char st:s){
            mp[st]++;
        }
        for(int i=order.size()-1;i>=0;i--){
            if(mp[order[i]]>=2){
                // cout<<order[i]<<" "<<m1[order[i]]<<endl;
                for(int j=0;j<m1[order[i]];j++){
                    t=order[i]+t;
                }
            }
        }
        return t;
    }
};