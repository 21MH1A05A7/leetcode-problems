class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(),grades.end());
        int k=1;
        int c=0;
        for(int i=0;i<grades.size();i+=k){
            c+=1;
            k+=1;
        }
        // cout<<c<<" ";
        return c;
    }
};