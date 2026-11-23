class Solution {
public:
   /* bool prime(int x){
        /*if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    */
    int countPrimes(int n) {
        vector<bool> p(n,true);
        if(n<2) return 0;
        p[0]=false;
        p[1]=false;
        
        for(int i=2;i*i<n;i++){
            if(p[i]){
                for(int j=i*i;j<n;j+=i){
                    p[j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(p[i]){
                count++;
            }
        }
        return count;
    }
};