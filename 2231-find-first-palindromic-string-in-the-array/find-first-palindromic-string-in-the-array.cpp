class Solution {
public:
bool palin(string s){
    int n=s.size();
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            return 0;
        }
    }
    return 1;
}
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(palin(words[i])){
                return words[i];
            }
        }
        return"";
    }
};