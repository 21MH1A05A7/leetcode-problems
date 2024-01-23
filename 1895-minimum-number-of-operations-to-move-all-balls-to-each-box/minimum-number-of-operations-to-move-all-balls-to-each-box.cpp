class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> v1;
        int s=0;
        for(int i=0;i<boxes.size();i++){
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    if(j<i){
                        s+=(abs(j-i));
                    }
                    else if(j>i){
                        s+=(abs(j-i));
                    }
                }
            }
            v1.push_back(s);
            s=0;
        }
        return v1;
    }
};