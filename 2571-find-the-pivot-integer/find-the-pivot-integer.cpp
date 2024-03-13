class Solution {
public:
    int pivotInteger(int n) {
        int s=0;
        int total=(n*(n+1))/2;
        for(int i=1;i<=n;i++){
            s+=i;
            if((s-i)==(total-s)){
                return i;
            }
        }
        return -1;
    }
};