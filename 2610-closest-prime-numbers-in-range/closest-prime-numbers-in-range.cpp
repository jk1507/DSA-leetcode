class Solution {
public:
    bool isPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> x;
        int difference=INT_MAX;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                x.push_back(i);
            }
        }
        int num1,num2;
        if(x.size()<=1){
            return {-1,-1};
        }
        for(int i=1;i<x.size();i++){
            if(x[i]-x[i-1]<difference){
                difference=x[i]-x[i-1];
                num1=x[i-1];
                num2=x[i];
            }
        }
        return {num1,num2};
    }
};