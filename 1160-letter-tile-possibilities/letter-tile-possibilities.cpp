class Solution {
public:
    int fact(int n){
        if(n<=1){
            return 1;
        }
        return n*fact(n-1);
    }
    void func(int ind,string& s,int& n,vector<char>& v1,map<char,int>& mp,map<vector<char>,int>& check,int& c){
        if(ind==n){

            cout<<endl;
            vector<char> temp=v1;
            sort(temp.begin(),temp.end());
            for(int i=0;i<v1.size();i++){
                cout<<temp[i]<<" ";  
            }
            check[temp]++;
            if(check[temp]==1){
                int si=v1.size();
                int num=fact(si);
                int den=1;
                for(auto ele:mp){
                    // cout<<ele.first<<" "<<ele.second<<endl;
                    den*=fact(ele.second);
                }
                // cout<<endl;
                int res=num/den;
                c+=res;
                cout<<c<<endl;
            }
            return;
        }
        v1.push_back(s[ind]);
        mp[s[ind]]++;
        func(ind+1,s,n,v1,mp,check,c);
        mp[v1[v1.size()-1]]--;
        v1.pop_back();
        func(ind+1,s,n,v1,mp,check,c);
    }

    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        vector<char> v1;
        map<char,int> mp;
        map<vector<char>,int>  check;
        int c;
        func(0,tiles,n,v1,mp,check,c);
        return c-1;
    }
};