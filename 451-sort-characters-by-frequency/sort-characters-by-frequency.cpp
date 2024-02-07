class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> v1;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto ele:mp){
            pair<int,char> p=make_pair(ele.second,ele.first);
            v1.push_back(p);
        }
        sort(v1.begin(),v1.end());
        string st;
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            for(int j=0;j<v1[i].first;j++){
                st+=v1[i].second;
            }
        }
        return st;
    }
};