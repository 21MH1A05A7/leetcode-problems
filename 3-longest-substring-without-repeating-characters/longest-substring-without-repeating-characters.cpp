class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ma=0;
        int i=0;
        int j=0;
        int n=s.size();
        deque<int> dq;
        while(i<n){
            if(dq.empty()){
                dq.push_back(s[i]);
                i+=1;
            }
            else{
                while(find(dq.begin(),dq.end(),s[i])!=dq.end()){
                    dq.pop_front();
                }

                dq.push_back(s[i]);
                if(dq.size()>=ma){
                    ma=dq.size();
                }
                i+=1;
            }
        }
        if(dq.size()>=ma){
            ma=dq.size();
        }
        return ma;
    }
};