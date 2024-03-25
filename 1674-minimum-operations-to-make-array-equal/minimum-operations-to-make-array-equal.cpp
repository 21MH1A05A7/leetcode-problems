class Solution {
public:
    int minOperations(int n) {
        int su=0;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int s=(2*i)+1;
            arr.push_back(s);
            su+=s;
        }
        cout<<arr[0]<<' ';
        int t=su/n;
        int op=0;
        int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]<t){
                op+=(t-arr[i]);
                c+=1;
            }
        }
        return op;
    }
};