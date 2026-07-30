class Solution {
public:
    int reverse(int x) {
        long long sum=0;
        while(x!=0){
            int r=x%10;
            sum=sum*10+r;
            if(sum>=pow(2,31)) return 0;
            if(sum<=-pow(2,31)) return 0;
            x=x/10;
        }
        return sum;
    }
};