class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        // vector<int> v1;
        map<int,int> m2;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto ele:mp){
            m2[ele.second]++;
            if(m2[ele.second]>1){
                return 0;
            }
        }
        return 1;

    }
};