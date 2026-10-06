class Solution {
public:
    int climbStairs(int n) {
        int x[100];
        x[0]=1;
        x[1]=2;
        if(n==1) return 1;
        for(int i=2;i<n;i++){
            x[i]=x[i-1]+x[i-2];
        }
        return x[n-1];
    }
};