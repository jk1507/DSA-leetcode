class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0,sign=1;
        while(n>0){
            int r=n%10;
            sum+=r*sign;
            sign=-sign;
            n=n/10;
        }
       if(sign==1) return -sum;
       return sum;
    } 
};