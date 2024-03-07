class Solution {
public:
    bool palin(string s){
        string t;
        for(int i=0;i<s.size();i++){
            t=s[i]+t;
        }
        if(t==s){
            return 1;
        }
        else{
            return 0;
        }
    }



    bool isStrictlyPalindromic(int t) {

            // int n=t;
            // string s;

            // int i=t-2;
            // while(n!=1){
            //     int rem=n%i;
            //     s=to_string(rem)+s;
            //     n=n/i;
            // }
            // s='1'+s;

            // if(!palin(s)){
            //     return 0;
            // }
        return 0;
    }
};