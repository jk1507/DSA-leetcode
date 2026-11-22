class Solution {
public:
    int helper(int x){
        int sum=0;
        while(x>0){
            int r=x%10;
            sum+=r*r;
            x=x/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_set<int> x;
        while(n!=1){
            if(x.find(n)!=x.end()){
                return false;
            }
            x.insert(n);
            n=helper(n);
        }
        return true;
    }
};