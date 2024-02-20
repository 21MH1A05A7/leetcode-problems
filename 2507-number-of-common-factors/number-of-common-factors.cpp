class Solution {
public:
    int commonFactors(int a, int b) {
        int c=0;
        if(a%b==0){
            for(int i=1;i<=b;i++){
                if(a%i==0 && b%i==0){
                    c+=1;
                }
            }
        }
        else if(b%a==0){
            for(int i=1;i<=a;i++){
                if(a%i==0 && b%i==0){
                    c+=1;
                }
            }
        }
        else{
            int mi=min(a,b);
            for(int i=1;i<=mi;i++){
                if(a%i==0 && b%i==0){
                    c+=1;
                }
            }
        }
        return c;
    }
};