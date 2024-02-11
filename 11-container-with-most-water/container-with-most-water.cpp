class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int ma=0;
        while(i<j){
            int sum=min(height[i],height[j])*(j-i);
            ma=max(sum,ma);
            if(height[i]<height[j]){
                i+=1;
            }
            else{
                j-=1;
            }
        }
        return ma;
    }
};