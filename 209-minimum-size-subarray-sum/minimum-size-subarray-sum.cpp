class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int i=0;
        int j=0;
        // int s=nums[i];
        int s=0;
        int mi=INT_MAX;
        while(j<nums.size()){
            if((s+nums[j])>=target){
                s=s-nums[i];
                cout<<i<<" "<<j<<endl;
                mi=min(j-i+1,mi);
                i=i+1;
            }
            else if(s<target){
                s+=nums[j];
                j+=1;
            }
            
        }
        // cout<<i<<" "<<j<<endl;
            while(i<j){
                if(s<target){
                    break;
                }
                else if(s>=target){
                    // cout<<s<<endl;
                    s=s-nums[i];
                    
                    mi=min(j-i+1,mi);
                    cout<<i<<" "<<j<<endl;
                    i+=1;
                }
            }

        if(mi==INT_MAX){
            return 0;
        }
        return mi;

    }
};