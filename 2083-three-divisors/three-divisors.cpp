class Solution {
public:
    bool isThree(int n) {
        int c=2;
        if(n<=2){
            return 0;
        }
        else{
            for(int i=2;i<n;i++){
                if(n%i==0){
                    c+=1;
                }
                if(c>3){
                    return 0;
                }
            }
            if(c==3){
                return 1;
            }
            return 0;
        }
    }
};