class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& t) {
        int gt=0,pt=0,mt=0;
        for(int i=1;i<t.size();i++){
            t[i]=t[i]+t[i-1];
        }
        int pind=0;
        int mind=0;
        int gind=0;
        for(int i=0;i<garbage.size();i++){
            string s=garbage[i];
            for(int j=0;j<garbage[i].size();j++){
                if(s[j]=='G'){
                    gt+=1;
                    gind=i;
                }
                else if(s[j]=='P'){
                    pt+=1;
                    pind=i;
                }
                else{
                    mt+=1;
                    mind=i;
                }
            }
        }
        int res=gt+pt+mt;
        if(gind!=0){
            res+=(t[gind-1]);
        }
        if(pind!=0){
            res+=(t[pind-1]);
        }
        if(mind!=0){
            res+=(t[mind-1]);
        }
        // =gt+(t[gind-1])+pt+(t[pind-1])+mt+(t[mt-1]);
        return res;
    }

};

//  if(g>0){
//                 gt+=(g);
//             }
//             if(p>0){
//                 pt+=(p);
//             }
//             if(m>0){
//                 mt+=(m);
//             }
//             gt+=(t[i-1]);
//             pt+=(t[i-1]);
//             mt+=(t[i-1]);