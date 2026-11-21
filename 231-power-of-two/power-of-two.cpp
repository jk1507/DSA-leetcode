class Solution {
public:
    
    bool isPowerOfTwo(int n) {
        /*for(int i=0;i<=n/2;i++){
            if(n==pow(2,i)){
                return true;
            }
        }
        return false;
        */
        if(n<=0) return false;
        while(n%2==0){
            n=n/2;
        }
        return n==1;
    }
};