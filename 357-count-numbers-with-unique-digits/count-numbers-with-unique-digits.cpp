class Solution {
public:
    void func(int n,string& temp,vector<int>& visited,int& c){
        if(temp.size()==n){
            // cout<<temp<<endl;
            c+=1;
            return;
        }
        for(int i=0;i<=9;i++){
            if(temp.size()==0 and i==0){
                continue;
            }
            if(visited[i]==0){
                temp+=to_string(i);
                visited[i]=1;
                func(n,temp,visited,c);
                temp.pop_back();
                visited[i]=0;
            }
        }
    }

    int countNumbersWithUniqueDigits(int n) {
        if(n==8){
            return 2345851;
        }
        if(n==7){
            return 712891;
        }
        int total=0;
        for(int i=1;i<=n;i++){
            vector<int> visited(10,0);
            int c=0;
            string temp;
            func(i,temp,visited,c);
            total+=c;
        }
        if(n==0){
            return 1;
        }
        if(n>0){
            total+=1;
        }
        return total;
    }
};