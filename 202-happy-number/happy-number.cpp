class Solution {
public:
    bool isHappy(int n) {
        long long sum=0;
        if(n==1) return true;
        if(n==4) return false;
        while(n>0){
            int r=n%10;
            sum=sum+r*r;
            n=n/10;
        }
        return isHappy(sum);
    }
};