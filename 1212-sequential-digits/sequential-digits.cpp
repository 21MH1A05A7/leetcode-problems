class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        string x=to_string(high);
        string temp=to_string(low);
        int len1=temp.size();
        int len2=x.size();
        int init=temp[0]-'0';
        // cout<<init;
        vector<int> v1;
        for(int i=len1;i<=len2;i++){
            for(int j=init-1;j<s.size()-i+1;j++){
                string y=s.substr(j,i);
                int val=stoi(y);
                if(val>=low && val<=high){
                    v1.push_back(val);
                }
            }
            init=1;
        }
        return v1;
    }
};