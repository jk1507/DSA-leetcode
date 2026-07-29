class Solution {
public:
    bool isSameAfterReversals(int num) {
        long long temp;
        long long sum=0,sum1=0;
        int a,r;
        int original=num;
        if(num==0){
            return true;
        }
        if(num%10==0){
            return false;
        }
        while(num>0){
            r=num%10;
            sum=sum*10+r;
            num=num/10;
        }
        temp=sum;
        while(temp>0){
            a=temp%10;
            sum1=sum1*10+a;
            temp=temp/10;
        }
        if(original==sum1){
            return true;
        }
        return false;

    }
};