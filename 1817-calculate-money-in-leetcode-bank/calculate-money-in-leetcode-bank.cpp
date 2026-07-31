class Solution {
public:
    int totalMoney(int n) {
        int i=1,m=1;
        long long  sum=0,x=1;
        while(i<=n){
            if(i%7==1){
                if(i>1){
                    m++;
                }
                x=m;
            }
            sum+=x;
            x++;
            i++;
            }
        return sum;
        }
};