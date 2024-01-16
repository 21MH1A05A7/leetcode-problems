class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ma=0;
        int prefix=0;
        for(int i=0;i<gain.size();i++){
            prefix+=gain[i];
            if(prefix>ma){
                ma=prefix;
            }
        }
        return ma;
    }
};