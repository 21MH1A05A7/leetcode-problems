class Solution {
public:

    bool check(map<char,int>& mp,map<char,int> temp){
        for(auto ele:mp){
            if(ele.second!=temp[ele.first]){
                return 0;
            }
        }
        return 1;
    }

    long long func(string s,map<char,int>& mp){
        long long bit=0;
        for(char c:s){
            mp[c]++;
            bit=bit|(1<<(c-'a'));
        }
        return bit;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> v1(strs.size());
        vector<string> l;
        vector<int> visited(strs.size(),0);
        long long bit=0;
        int n=strs.size();
        map<string,int> mp;
        for(int i=0;i<n;i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(mp.find(strs[i])!=mp.end()){
                v1[mp[strs[i]]].push_back(temp);
            }
            else{
                mp[strs[i]]=i;
                v1[i]={temp};
            }
            cout<<endl;
        }
        vector<vector<string>> ans;
        for(auto ele:v1){
            if(ele.size()!=0){
                ans.push_back(ele);
            }
        }
        return ans;
    }
};