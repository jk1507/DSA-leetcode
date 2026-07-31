class Solution {
public:
    int sumBase(int n, int k) {
        int r;
        long long sum=0;
        while(n!=0){
            r=n%k;
            sum+=r;
            n=n/k;
        }
        return sum;
    }
};