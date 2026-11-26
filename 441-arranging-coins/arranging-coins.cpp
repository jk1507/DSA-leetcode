class Solution {
public:
    int arrangeCoins(int n) {
       int i=1;
       while(i>=1){
       long long totalCoinRequired=1LL * i*(i+1)/2;
       if(totalCoinRequired>n){
        return i-1;
        break;
       }
       i++;
       }
       return i-1;
    }
};