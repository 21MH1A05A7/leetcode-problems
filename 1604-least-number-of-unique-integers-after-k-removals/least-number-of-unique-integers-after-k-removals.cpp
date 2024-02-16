class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int count=0;
        vector<pair<int,int>> v1;
        for(auto ele:mp){
            pair<int,int> p=make_pair(ele.second,ele.first);
            v1.push_back(p);
        }
        sort(v1.begin(),v1.end());
        int c=0;
        for(int i=0;i<v1.size();i++){
            if(v1[i].first<=k && k>0){
                k-=v1[i].first;
                v1[i].first=0;
            }
            else{
                break;
            }
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i].first!=0){
                c+=1;
            }
        }

        return c;
        // int c=0;
        // int y=0;
        // // cout<<k<<" ";
        // if(k==0){
        //     for(auto ele:mp){
        //         if(ele.second!=0){
        //             count+=1;
        //         }
        //     }
        //     return count;
        // }
        // else{
        //     for(auto ele:mp){
        //         if(ele.second!=0 && k>0){
        //             if(ele.second<=k){
        //                 k=k-ele.second;
        //                 mp[ele.first]=0;
        //             }
        //             else{
        //                 c+=1;
        //             }
        //         }
        //     }
        // }
        // int v=0;
        // for(auto ele:mp){
        //     if(ele.second!=0){
        //         cout<<ele.first<<" "<<ele.second<<endl;
        //         v+=1;
        //     }
        // }
        // cout<<k<<endl;
        // if(c==v && k>0){
        //     return c;
        // }
        // else{
        //     return v;
        // }
        // // return 5;
    }
};