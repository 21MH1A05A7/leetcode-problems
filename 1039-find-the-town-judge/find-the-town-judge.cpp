class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        map<int,int> s; //second elements
        map<int,int> st; //first elements
        if(trust.size()==0){
            if(n==1){
                return n;
            }
            else{
                return -1;
            }
        }

        for(int i=0;i<trust.size();i++){
            s[trust[i][1]]++;
            st[trust[i][0]]++;
        }
        int len=st.size();
        for(auto ele:s){
            if(!st[ele.first]){
                if((ele.first*ele.second)==((n-1)*ele.first)){
                   return ele.first;
                }
                
            }
        }
        return -1;
    }
};