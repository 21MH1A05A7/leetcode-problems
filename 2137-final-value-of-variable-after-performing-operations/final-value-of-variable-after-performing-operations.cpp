class Solution {
public:
    int finalValueAfterOperations(vector<string>& s) {
        int x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=="--X" or s[i]=="X--"){
                x-=1;
            }
            else{
                x+=1;
            }
        }
        return x;
    }
};