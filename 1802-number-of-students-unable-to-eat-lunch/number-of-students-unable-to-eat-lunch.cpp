class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int i=0;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                if(q.front()==sandwiches[i]){
                    q.pop();
                    size=q.size();
                    i++;
                }
                else{
                    int front=q.front();
                    q.pop();
                    q.push(front);
                }
            }
            if(size<=0 and i<sandwiches.size()){
                return q.size();
            }
        }
        return 0;
    }
};