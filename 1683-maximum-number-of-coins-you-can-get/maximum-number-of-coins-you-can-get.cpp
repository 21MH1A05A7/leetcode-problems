class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0;
        int n=piles.size();
        int len=n/3;
        for(int i=n-2;i>=len;i-=2){
            s+=piles[i];
        }
        return s;
    }
};