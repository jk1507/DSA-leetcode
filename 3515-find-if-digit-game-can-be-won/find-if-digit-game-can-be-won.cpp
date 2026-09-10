class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int AliceSum=0;
        int BobSum=0;
        int AliceSum1=0;
        for(int x:nums){
            if(x<10){
                AliceSum+=x;
            }
            if(x>=10) BobSum+=x;
        }
        if(AliceSum>BobSum) return true;
        if(BobSum>AliceSum) return true;
        return false;
    }
};